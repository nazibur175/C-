#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
pair<int,int>b[5000009];
void solve(){
    int n;
    cin>>n;
    int a[n+9]={0};
    for(int i=1;i<=n;i++)cin>>a[i];
    int f=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
        int temp=a[i]+a[j];
        if(b[temp].first!=0 && b[temp].first!=i && b[temp].first!=j && b[temp].second!=i && b[temp].second!=j){
            cout<<"YES"<<endl;
            cout<<i<<" "<<j<<" "<<b[temp].first<<" "<<b[temp].second<<endl;
            f=1;
            break;
        }
        b[temp]={i,j};
        }
        if(f)break;
    }
    if(!f)
    cout<<"NO"<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}