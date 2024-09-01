#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
//#define test int t; cin>>t; while(t--)
void solve(){
    int t;
    cin>>t;
    cin.ignore();
    for(int tt=1;tt<=t;tt++){
        string s;
        // cin>>s;
        getline(cin,s);
        vector<vector<int>>v(30);
        for(int i=0;i<s.size();i++){
            int temp = s[i]-'a';
            v[temp].push_back(i);
        }
        int q;
        cin>>q;
        cin.ignore();
        cout<<"Case "<<tt<<":"<<endl;
        while (q--)
        {
            string ss;
            // cin>>ss;
            getline(cin,ss);
            if(ss==" ") {
                cout<<"YES"<<endl;
                continue;
            }
            int in=0;
            int ans = 1;
            for(int i=0;i<ss.size();i++){
                int temp = ss[i]-'a';
                if(v[temp].empty()){
                    ans=0;
                    break;
                }
                auto it = lower_bound(v[temp].begin(),v[temp].end(),in);
                if(it==v[temp].end()){
                    ans=0;
                    break;
                }
                in = *(it);
                in++;
            }
            if(ans) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}