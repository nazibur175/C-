#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cur_min=a[n-1];
        int ans=0;
        for(int i=n-2;i>=0;i--){
                int x=(a[i]+cur_min-1)/cur_min;
                ans+=x-1;
                cur_min=(a[i]/x);
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