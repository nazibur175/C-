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
        int cnt=0;
        int cntzero=0;
        int cntone=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                cntzero++;
            }
            else{
                cntone++;
            }
            if(cntzero==cntone){
                cnt++;
            }
        }
        int ans= 1LL<<(cnt);
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}