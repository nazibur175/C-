#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    int ans=1;
    int cnt0=0;
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(a[i]==0) cnt0++;
        else{
            cnt1++;
            if(cnt1==2){
                ans*=cnt0+1;
                cnt1=1;
            }
                cnt0=0;
        }
    }
    if(cnt1==0) ans=0;
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}