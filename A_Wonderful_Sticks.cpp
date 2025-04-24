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
        s='<'+s;
        vector<int>ans(n+1,0);
        int cnt=1;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='<'){
                ans[i]=cnt;
                cnt++;
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='>'){
                ans[i]=cnt;
                cnt++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}