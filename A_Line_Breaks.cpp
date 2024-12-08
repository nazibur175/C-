#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        vector<string> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        string s;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s.size()+v[i].size()<=m){
                s+=v[i];
                ans++;
            }
            else{
                break;
            }
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