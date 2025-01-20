#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a[6]={0};
        cin>>a[1]>>a[2]>>a[4]>>a[5];
        int ans=0;
        for(int i=-500;i<=500;i++){
            a[3]=i;
            int cnt=0;
            for(int j=1;j<=3;j++){
                if((a[j]+a[j+1])==a[j+2]){
                    cnt++;
                }
            }
            ans=max(ans,cnt);
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