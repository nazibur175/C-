#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--) 
int dp[100+1][200+1][2];
int cal(int ball, int need , int turn){
    if(need<=0 || ball<=0) 
        return 0;
    if(dp[ball][need][turn]!=-1) return dp[ball][need][turn];
    int run=0;
    if(turn==0){
        if(ball%6==0) ball=ball-6;
        else ball=ball-(ball%6);
        run = cal(ball, need, 1-turn);
    }
    else {
       
        vector<int>v{0,1,2,3,4,6};
 
        for(int i=0;i<=5;i++){
            
            if(v[i]%2==1){
                if((ball-1)%6==0){
                    run = max(run, cal( ball-1 ,need-v[i], turn)+v[i]);
                }
                else 
                    run = max(run, cal( ball-1 ,need-v[i], 1-turn)+v[i]);
            }
            else{ 
                 if((ball-1)%6==0){
                    run = max(run , cal( ball-1,need-v[i],1- turn)+v[i]);
                 }
                 else 
                    run = max(run , cal( ball-1,need-v[i], turn)+v[i]);
            }
        }
    }
    return dp[ball][need][turn] = run;

}
void solve(){
    int t;
    cin>>t;
    memset(dp,-1,sizeof(dp));
    for(int tt=1;tt<=t;tt++){
        int ball,need, fifty_need;
        cin>>ball>>need>>fifty_need;
        // 1 = captain turn
        // 0 = others
        int turn = 1;
        int possible = cal(ball,need,turn);
        //cout<<possible<<endl;

        cout<<"Case "<<tt<<": ";
        if(possible>=fifty_need && possible>=need){
            cout<<"Like a Boss!"<<endl;
        }
        else if(possible>=need) cout<<"Bravo Captain!"<<endl;
        else cout<<"Love You Captain!"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}