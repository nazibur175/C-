#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        int a[n+9],b[m+9];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        int s=b[0];
        for(int i=1;i<m;i++){
            s|=b[i];
        }
        int ans1=0,ans2=0;
        for(int i=0;i<n;i++){
            ans1^=a[i];
            ans2^=a[i]|s;
        }
        cout<<min(ans1,ans2)<<" "<<max(ans1,ans2)<<endl;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}