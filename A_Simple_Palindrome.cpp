#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string s="aeiou";
        if(n<5){
        string ans;
        for(int i=0;i<n;i++){
            ans+=s[i];
        }
        cout<<ans<<endl;
       }
       else {
          string ans="";
          int temp=n/5;
          int extra=n%5;
          for(int i=0;i<temp;i++){
            ans+="a";
          }
          if(extra>0) ans+="a";
          extra--;
          for(int i=0;i<temp;i++){
            ans+="e";
          }
          if(extra>0) ans+="e";
          extra--;
          for(int i=0;i<temp;i++){
            ans+="i";
          }
          if(extra>0) ans+="i";
          extra--;
          for(int i=0;i<temp;i++){
            ans+="o";
          }
          if(extra>0) ans+="o";
          extra--;
          for(int i=0;i<temp;i++){
            ans+="u";
          }
          if(extra>0) ans+="u";
          extra--;
          cout<<ans<<endl;
       }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}