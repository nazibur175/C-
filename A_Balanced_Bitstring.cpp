#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n, k; 
        cin >> n >> k;
        string s;
        cin >> s;
        int f = 1;
        int c1 = 0;
        int c0 = 0;
        for (int j = 0; j < k; ++j){
          int one=0;
          int zero=0;
          for (int i = j; i < n; i+=k){
            if(s[i]=='0') zero++;
            else  if(s[i]=='1') one++;
          }
          if(one && zero)  f = 0;
          if(one) 
            c1++;
          else  if(zero)  
            c0++;
        }
        if(c1*2>k || c0*2>k)  
            f = 0;
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    // Observation: i,i+k should be same for all i

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}

