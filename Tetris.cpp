#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e6;
int dp[N][5];
int chef(int l,int c){
    //4
    if(dp[l][c]!=0) return (dp[l][c])%mod;
    else if(l==1 && c==0) return dp[l][c]= 1%mod;
    //4
    else if(l==2 && c==0) return dp[l][c]= 1%mod;
    //4
    //2,4
    //1
    else if(l==3 && c==0) return dp[l][c]=((1%mod+  (chef(l-2,0)%mod))%mod  +   (chef(l-1,1)%mod))%mod;
    //4
    //2,4
    //3,4
    //1
    else if(l==4 && c==0) return dp[l][c]= (((1%mod+  chef(l-2,0)%mod)%mod + chef(l-3,0)%mod)%mod+chef(l-1,1)%mod)%mod;
   
    //else if (c==0) return dp[l][c]=  (((chef(l-2,0)%mod + chef(l-3,0)%mod)%mod + chef(l-4,0)%mod)%mod +  chef(l-1,1)%mod)%mod;
    else if (c==0) return dp[l][c]=  (chef(l-10,0)%mod);
    //chefina
    else if(l==2 && c==1) return dp[l][c]= (chef(l-1,0)%mod);
    else if(l==3 && c==1) return dp[l][c]= (chef(l-1,0)%mod);
    else if(l==4 && c==1) return dp[l][c]= (chef(l-2,1)%mod +  chef(l-1,0)%mod)%mod;
    else if(l==5 && c==1) return dp[l][c]= ((chef(l-2,1)%mod + chef(l-3,1)%mod)%mod +  chef(l-1,0)%mod)%mod;
    //if(dp2[l]) return dp2[l];
    else return 0;
    //return dp[l][c]= ((((chef(l-2,1)%mod  + chef(l-3,1)%mod)%mod +chef(l-4,1)%mod)%mod)%mod  + chef(l-1,0)%mod)%mod;
}

void solve(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int l;
        cin>>l;
        int ans=0;
        ans=chef(l,0);
        cout<<i<<"----"<<ans%mod<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}