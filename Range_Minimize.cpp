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
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);

        if(n<=3) cout<<0<<endl;
        else {
            int ans = INT64_MAX;
            if(n==4){
                for(int i=0;i<4;i++){
                    for(int j=i+1;j<4;j++){
                        ans = min(ans, abs(a[i]-a[j]));
                    }
                }
            }
            else {
                ans = min ( ans, abs(a[0]-a[n-1]));
                ans = min ( ans, abs(a[0]-a[n-2]));
                ans = min ( ans, abs(a[0]-a[n-3]));

                ans = min ( ans, abs(a[1]-a[n-2]));
                ans = min ( ans, abs(a[1]-a[n-1]));

                ans = min ( ans, abs(a[2]-a[n-1]));

            }
            cout<<ans<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}