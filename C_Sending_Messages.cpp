#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,f,a,b;
        cin>>n>>f>>a>>b;
        int arr[n+9]={0};
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            ans+=min(((arr[i]-arr[i-1])*a),b);
        }
        if(ans<f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}