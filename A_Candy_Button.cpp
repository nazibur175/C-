#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,c;
    cin>>n>>c;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pre=a[0];
    int ans=1;
    for(int i=1;i<n;i++){
        if(a[i]-pre>=c){
            ans++;
            pre=a[i];
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