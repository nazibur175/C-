#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m,ans;
        cin>>n>>m;
        if(n%2==0)
        {
            if(m%4==1)
                ans=n-m;
            else if(m%4==0)
                ans=n; 
            else if(m%4==2)
                ans=n+1;
            else if(m%4==3)
                ans=n+m+1;
        }
        else
        {
                if(m%4==0)
                ans=n;
                else if(m%4==1)
                ans=n+m;
                else if(m%4==2)
                ans=n-1;
                else if(m%4==3)
                ans=n-(m+1);
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