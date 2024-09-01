#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        
        int bit[32]={0};
        for(int i=0;i<n;i++){
            int x=a[i];
            for(int i=0;i<32;i++){
                if(1<<i&x) bit[i]++;
            }
        }

        for(int i=30;i>=0;i--){
            int need= n-bit[i];
            if(k>=need){
                bit[i]+=need;
                k=k-need;
            }
        }
        int ans=0;
        for(int i=0;i<=30;i++){
            if(bit[i]==n){
                ans=ans+(1<<i);
            }
        }
        cout<<ans<<endl;
        // cout<<bit[i]<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}