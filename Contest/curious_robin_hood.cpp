#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int max_n=1e7+9;
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
int update(int ind,int x,int n){
    while (ind<=n)
    {
        tree[ind]+=x;
        ind+=ind & (-ind);
    }
    
}
void solve(){
        test{
            memset(tree,0,sizeof(tree));
            int n;
            cin>>n;
            int ans=0;
            for(int i=1;i<=n;i++){
                int x;
                cin>>x;
                ans+=(query(max_n-5)-query(x));
                update(x,1,(max_n-5));
            }
            cout<<ans<<endl;
        }
    }
    
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}