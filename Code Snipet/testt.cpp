#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
#define endl "\n"
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int n,d;
        cin>>n>>d;
        int ans =0;
        for(int i=1;i<=n;i++)
        {
            int x,y;
            cin>>x>>y;
            int tmp=0;
            if(x<d)
            {
               int p=(d-x-1);
               ans++;
               ans+=p/x;
            }
        }
        cout<<"Case "<<tt<<": "<<ans<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}