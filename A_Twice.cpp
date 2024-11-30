#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        map<int,int>m;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m[x]++;
        }
        int ans=0;
        for(auto x:m){
            ans+=x.second/2;
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