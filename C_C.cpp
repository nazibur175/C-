#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int max_n=1e6;
int tree[max_n];
int query(int ind){
    int sum=0;
    while (ind>0)
    {
        sum+=tree[ind];
        ind-=ind & (-ind);
    }
    return sum;
    
}
// index, value, size of array
void update(int ind,int x,int n){
    while (ind<=n)
    {
        tree[ind]+=x;
        ind+=ind & (-ind);
    }
    
}
void solve(){
    int n;
    cin>>n;
    int a[n+10]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i];
        update(i,1,n);
    }
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        int l=0, r=n;
        while(r-l>1){
            int mid=(l+r)/2;
            if(query(mid)>=x) r=mid;
            else l=mid;
        }
        cout<<a[r];
        if(i!=n) cout<<" ";
        update(r,-1,n);
    }
    cout<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}
