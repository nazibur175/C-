#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string s,ss;
        cin>>s>>ss;
        int f=1;
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
                if(ss[i]!='R'){
                    f=0;
                    break;
                }
            }
            if(ss[i]=='R'){
                if(s[i]!='R'){
                    f=0;
                    break;
                }
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}