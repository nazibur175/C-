#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int reverse(int n){
    int val=0;
    while (n)
    {
        val*=10;
        val+=n%10;
        n/=10;
    }
    
    return val;
}
void solve(){
     vector<int>v;
        int N=4e4;
        for(int i=1;i<=N;i++){
            if(i==reverse(i)) v.push_back(i);
        }
        sort(v.begin(),v.end());
        //cout<<v.size()<<endl;
    
    int dp[N+9]={0};
    dp[0]=1;
    for(int i=0;i<v.size();i++){
        for(int j=v[i];j<=N;j++){
            dp[j]+=dp[j-v[i]];
            dp[j]=dp[j]%mod;
        }
    }
    //cout<<"Ok"<<endl;
    test{
        int n;
        cin>>n;
        cout<<dp[n]<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}