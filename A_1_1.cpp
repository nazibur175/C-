#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
void solve(){
    test{
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=1;i+1<n;i++){
            if(s[i-1]=='1' && s[i+1]=='1'){
                s[i]='1';
            }
        }
        int ans1=count(s.begin(),s.end(),'1');
        for(int i=1;i+1<n;i++){
            if(s[i-1]=='1' && s[i+1]=='1'){
                s[i]='0';
            }
        }
        int ans2=count(s.begin(),s.end(),'1');
        cout<<ans2<<" "<<ans1<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}