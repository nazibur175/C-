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
        sum&=tree[ind];
        ind-=ind & (-ind);
    }
    return sum;
    
}
int update(int ind,int x,int n){
    while (ind<=n)
    {
        tree[ind]&=x;
        ind+=ind & (-ind);
    }
    
}
void solve(){
    test{
    memset(tree,0,sizeof(tree));
    int n;
    cin>>n;
    int a[n+9];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        update(i,a[i],n);
    }
    int q;
    cin>>q;
     while (q--) {
            int l, k;
            cin >> l >> k;
            l--; 
            int left = l, right = n - 1;
            int result = -1;
            while (left < right) {
                int mid = left+(right-l)/2;
                if (query(mid) >= k) {
                    result = mid;
                    right = mid - 1;
                    // left=mid+1;
                    // result=mid;
                } 
                else {
                    left = mid + 1;
                    // right=mid-1;
                }
            }
            if(result>=0) result++;
            cout<<result<<" ";
        }
        cout<<endl;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}
