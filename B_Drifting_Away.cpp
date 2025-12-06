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
        int f=0;
        int n=s.size();
        for(int i=0;i<n-1;i++){
            if(s[i]=='*' && s[i+1]=='*'){
                f=1;
                break;
            }
            if(s[i]=='*' && s[i+1]=='<'){
                f=1;
                break;
            }
            if(s[i]=='>' && s[i+1]=='*'){
                f=1;
                break;
            }
            if(s[i]=='>' && s[i+1]=='<'){
                f=1;
                break;
            }
        }
        if(f) {
            cout<<"-1"<<endl;
            continue;
        }
        int mx=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[0]==s[i] || s[i]=='*'){
                cnt++;
            }
            else break;
        }
        mx=max(mx,cnt);
        cnt=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==s[n-1] || s[i]=='*'){
                cnt++;
            }
            else break;
        }
        mx=max(cnt,mx);
        cout<<mx<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}