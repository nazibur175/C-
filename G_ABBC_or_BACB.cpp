#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        int n=s.size();
        int all=0;
        if(s[0]=='B' || s[n-1]=='B') all=1;

        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1] && s[i]=='B') all=1;
        }
        vector<int>v;
        int cntA=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A') cntA++;
            else if(cntA){
                v.push_back(cntA);
                cntA=0;
            }
        }
        if(cntA) v.push_back(cntA);
        sort(v.begin(),v.end());

        int ans=0;
        for(auto x:v) ans+=x;

        if(all==0) 
            ans=ans-v[0];
        cout<<ans<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}