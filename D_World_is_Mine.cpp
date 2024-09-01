#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
vector<int> vec;
int n;
int DP[5005][5005];
int dp(int i, int j){
    if(i==n) 
        return 0;
    if(DP[i][j]!=-1) 
        return DP[i][j];
    int x = dp(i+1, j+1);
    int y = (j>=vec[i]) ? dp(i+1, j-vec[i])+1 : 0;
    int ans = max(x, y);
    DP[i][j]=ans;
    return ans;
}
 
void solve(){
    test{
        cin>>n;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin>>v[i];
            mp[v[i]]++;
        }

        vec.clear();
        for(auto[a, b] : mp){
            vec.push_back(b);
        } 

        n = vec.size();
        //memset(DP,-1,sizeof(DP));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                DP[i][j]=-1;
            }
        }

        cout<<n-dp(0,0)<<endl;
    }
}


int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();
}