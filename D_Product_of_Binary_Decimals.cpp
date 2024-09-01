#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
vector<int>binary;
int dp[100000+9];
int cal(int num){
    if(num==1) return 1;
    int ans=0;
    if(dp[num]!=-1) return dp[num];
    for(auto x:binary){
        if(x!=0 && x!=1 && num%x==0){
           ans|=cal(num/x);
        }
    }
    return dp[num]=ans;
}
void solve(){
   memset(dp,-1,sizeof(dp));
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                for(int l=0;l<2;l++){
                    for(int m=0;m<2;m++){
                        for(int n=0;n<2;n++){
                            int num=i*100000 + j*10000 + k*1000 + l*100 + m*10 + n;
                            binary.push_back(num);
                        }
                    }
                }
            }
        }
    }

    sort(binary.begin(),binary.end());
    //for(auto x:binary) cout<<x<<endl;
    test{
        int n;
        cin>>n;
    
        if(cal(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}