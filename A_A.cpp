#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
string L,R;
int n;
int len;
vector<int>v[11];
const int N=3e5+9;
int dp[11][N];
// jeita banaite hobe, given string 
int cal(int pos1, int pos2){
      if(pos1<len && pos2>=n){
            // cout<<"HERE"<<endl;
            return 1;
      }
      if(pos1>=len && pos2<=n) return 0;
      if(dp[pos1][pos2]!=-1) return dp[pos1][pos2];
      int low=L[pos1]-'0';
      int up=R[pos1]-'0';
      int temp=0;
      //cout<<low<<" "<<up<<endl;
      for(int i=low;i<=up;i++){
            int t=1;
            int in=lower_bound(v[i].begin(),v[i].end(),pos2)-v[i].begin();
            // cout<<in<<endl;
            if(in>=v[i].size() || pos2>v[i].back()){
                  // cout<<pos1<<" "<<pos2<<endl;
                  // cout<<"HERE"<<endl;
                  return 1;
            }
            for(int ii=in;ii<v[i].size();ii++){
                  t&= cal(pos1+1,v[i][ii]+1);
            }
            temp|=t;
      }
      // cout<<"temp="<<temp<<endl;
      return dp[pos1][pos2]=temp;
}
void solve(){
      test{
            
            string s;
            cin>>s;
            n=s.size();
            for(int i=0;i<11;i++){
                  v[i].clear();
                  for(int ii=0;ii<=n;ii++){
                        dp[i][ii]=-1;
                  }
            }
            // int len;
            cin>>len;
            cin>>L>>R;
            for(int i=0;i<n;i++){
                  int dig=s[i]-'0';
                  v[dig].push_back(i);
            }
            // for(auto x:v[1]) cout<<x<<endl;
            int ans=cal(0,0);
            if(ans) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

      }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}