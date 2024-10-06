#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r)
    {
    	return uniform_int_distribution<int>(l, r) (rng);
    }
void solve(){
  test{
    int n,q;
    cin>>n>>q;

    map<int,int>rn;
    int pre[n+1]={0};
    int xo=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(rn[x]==0) rn[x]=my_rand(1,1e18);
        xo=xo^rn[x];
        pre[i]=xo;
    }

    while (q--)
    {
        int l,r;
        cin>>l>>r;
         if((pre[r]^pre[l-1])==0){
             cout<<"YES"<<endl;
         }
         else cout<<"NO"<<endl;
    }
    
  }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();
    
}