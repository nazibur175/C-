#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
        test{
            
        int n;
        cin>>n;
        string s;
        cin>>s;
        int res=s.size();
        if(n%2==0)
        {
            vector<int>v[2]={vector<int>(26),vector<int>(26)};
            for(int i=0;i<n;i++){
                v[i%2][s[i]-'a']++;
            }
            for(int i=0;i<2;i++){
                int mx=0;
                for(int j=0;j<26;j++){
                    mx=max(mx,v[i][j]);
                }
                res-=mx;
            }
            cout<<res<<endl;
        }
        else
        {
            vector<int>suf[2]={vector<int>(26),vector<int>(26)};
            vector<int>pref[2]={vector<int>(26),vector<int>(26)};
            for(int i=n-1;i>=0;i--){
                suf[i%2][s[i]-'a']++;
            }
            for(int i=0;i<n;i++){
                int ans=n;
                suf[i%2][s[i]-'a']--;
                for(int k=0;k<2;k++){
                    int mx=0;
                    for(int j=0;j<26;j++){
                        mx=max(mx,suf[1-k][j]+pref[k][j]);
                    }
                        ans-=mx;
                }
                res=min(res,ans);
                pref[i%2][s[i]-'a']++;
            }
            cout<<res<<endl;
        }
        }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}