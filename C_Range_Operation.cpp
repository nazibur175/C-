#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
const int inf = 1e13;
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+5]={0};
        for(int i=1;i<=n;i++)cin>>a[i];
        int pre[n+5]={0};
        for(int i=1;i<=n;i++){
            pre[i]=pre[i-1]+a[i];
        }
        int ans=0;
        int R=-inf;
        int L=-inf;
        for(int i=1;i<=n;i++){
            L=max(L,i-(i*i)+pre[i-1]);
            R=(i*i)+i-pre[i];
            ans=max(ans,L+R);
        }
        cout<<pre[n]+ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}