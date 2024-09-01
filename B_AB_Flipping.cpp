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
    int c=0;
    int ans=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='B') c++;
        else {
            if(c){
            ans+=c;
            c=0;
            s[i]='B';
            i++;
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