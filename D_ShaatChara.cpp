#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        int n;
        cin>>n;
        int a[n];
        int xo=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            xo^=a[i];
        }
        cout<<"Case "<<tc<<": ";
        if(xo==0){
            cout<<0<<endl;
            continue;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(a[i]&xo){
                ans++;
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