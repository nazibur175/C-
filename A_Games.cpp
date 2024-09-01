#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n];
    int aa[n];
    for(int i=0;i<n;i++) 
        cin>>a[i]>>aa[i];
    //for(int i=0;i<n;i++) cout<<a[i]<<" "<<aa[i]<<endl;
    
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            else if(a[i]==aa[j]) ans++;
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