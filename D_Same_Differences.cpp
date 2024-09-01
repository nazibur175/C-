#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+9];
        int c=0;
        map<int,int>m;
        int ans=0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            int y=x-i;
            ans+=m[y];
            m[y]++;

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