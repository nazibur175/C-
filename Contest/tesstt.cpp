#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> b(n);
        int mx=0;
        for(int i=0;i<n;i++){
            cin>>b[i];
            mx=max(mx,b[i]);
        }
        int ans=0;
        for(int i=1;i<=mx;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                if(b[j]<=i && a[j]>0){
                    sum+=a[j];
                }
            }
            ans=max(ans,sum-i);
        }
        cout<<ans<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}