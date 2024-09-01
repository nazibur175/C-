#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n,m;
const int N=2e5+9;
int a[N];
int b[N];
void solve(){
    test{
        cin>>n>>m;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int optimal=INT64_MAX;
        int presum=0;
        for(int i=m-1;i>=0;i--){
            optimal= min(optimal,presum+a[i]);
            presum+=b[i];
        }
        for(int i=m;i<n;i++){
            optimal+=min(a[i],b[i]);
        }
        cout<<optimal<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}