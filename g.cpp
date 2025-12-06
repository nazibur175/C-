#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
void solve(){
    test{
        string s;
        cin>>s;
        // cout<<s<<endl;
        int nul=0;
        int pos=-1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='\\' && s[i+1]=='0'){
                nul++;
            }
        }
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='\\' && s[i+1]=='0'){
                pos=i;
                break;
            }
        }
        cout<<s.size()-nul+1<<" ";

        if(pos==-1) cout<<s.size();
        else cout<<pos;
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}