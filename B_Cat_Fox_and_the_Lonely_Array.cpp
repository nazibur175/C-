#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int  n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];

        int ans=1;
        for(int i=0;i<=20;i++){
            int pre_in=0;
            int cur_dis=0;
            for(int j=1;j<=n;j++){
                if(a[j]&(1<<i)){
                    cur_dis=max(cur_dis,j-pre_in);
                    pre_in=j;
                }
            }
            if(pre_in){
                cur_dis=max(cur_dis,n-pre_in+1);
                ans=max(ans,cur_dis);
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