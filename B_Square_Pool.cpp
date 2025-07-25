#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        int ans=0;
        for(int i=0;i<n;i++){
            int x,y,xx,yy;
            cin>>x>>y>>xx>>yy;
            if(xx+yy==m && ((x==1 && y==-1) || (x==-1 && y==1))){
                ans++;
            }
            else if(xx==yy && ((x==1 && y==1)||(x==-1 && y==-1))){
                ans++;
            }
        }
        cout<<ans<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}