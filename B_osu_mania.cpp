#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>ans;
        for(int i=1;i<=n;i++){
            string s;
            cin>>s;
            for(int j=0;j<4;j++){
                if(s[j]=='#'){
                    ans.push_back(j+1);
                }
            }
        }
        for(int i=n-1;i>=0;i--) cout<<ans[i]<<" ";
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}