#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int ans=0;
        int sum=0;
        int cnt=0;
        for(int i=n-1;i>=0;i--){
            sum+=a[i];
            cnt++;
            if((a[i]*cnt)>=x){
                ans++;
                sum=0;
                cnt=0;
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