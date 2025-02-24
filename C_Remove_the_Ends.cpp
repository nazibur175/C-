#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+1];
        int prepos[n+1]={0};
        int postneg[n+1]={0};
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int possum=0;
        for(int i=1;i<=n;i++){
            if(a[i]>0){
                possum+=a[i];
            }
            prepos[i]=possum;
        }
        int negsum=0;
        for(int i=n;i>=1;i--){
            if(a[i]<0){
                negsum+=(-1ll*(a[i]));
            }
            postneg[i]=negsum;
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            ans = max(ans, prepos[i]+postneg[i]);
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
