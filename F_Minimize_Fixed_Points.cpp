#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int div[n+1]={0};
        for(int i=2;i<=n;i++){
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    div[i] = i/j;
                    break;
                }
            }
        }
        int ans[n+1]={0};
        for(int i=1;i<=n;i++) ans[i]=i;
        for(int i=2;i<=n;i++){
            if(div[i]){
                swap(ans[i], ans[div[i]]);
            } 
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i];
            if(i<n) cout<<" ";
            else cout<<"\n";
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}