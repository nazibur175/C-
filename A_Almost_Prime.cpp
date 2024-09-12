#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int check[n+1]={0};
    int cnt[n+1]={0};
    int ans=0;
    for(int i=2;i<=n;i++){
        if(check[i]==0)
        {
            for(int j=i+i;j<=n;j+=i){
            check[j]=1;
            cnt[j]++;
            }
        }
        if(cnt[i]==2){
            ans++;
        }
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}