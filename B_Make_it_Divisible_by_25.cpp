#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
       cin>>s;
       int x,y,ans;
       for(int i=0;i<s.size();i++)
       {
           for(int j=i+1;j<s.size();j++)
           {
               x=s[i]-'0';
               y=s[j]-'0';
               if((x*10+y)%25==0)
                ans=((s.size()-1)-j)+abs(j-i)-1;
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