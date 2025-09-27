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
    int a[n+9];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        update(i,a[i],n);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int op;
        cin>>op;
        if(op==1){
            int in;
            cin>>in;
            cout<<query(in)<<endl;
        }
        else if(op==2){
            int in,val;
            cin>>in>>val;
            update(in,val,n);
        }

    }


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}
