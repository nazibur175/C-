#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string s[n];
        for(int i=0;i<n;i++) cin>>s[i];
        int ans=0;
        for(int i=0;2*i<n;i++) {
            for(int j=0;2*j<n;j++){
                vector<char>v;
                v.push_back(s[i][j]);
                v.push_back(s[j][n-1-i]);
                v.push_back(s[n-1-i][n-1-j]);
                v.push_back(s[n-1-j][i]);
                char ch = *max_element(v.begin(),v.end());
                for(int ii=0;ii<4;ii++){
                    ans+=ch-v[ii];
                }
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