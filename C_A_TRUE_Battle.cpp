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
        int ans=0;
        if(s[0]=='1' || s.back()=='1'){
            ans=1;
        }
        for(int i=0;i<n-1;i++){
           if(s[i]=='1' && s[i+1]=='1'){
               ans=1;
               break;
           }
        }
       if(ans)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}