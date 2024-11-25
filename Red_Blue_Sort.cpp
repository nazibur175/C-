#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+9];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(a[i]==i)cnt++;
        }
        if(cnt==n){
            cout<<n<<endl;
            continue;
        }
        if(cnt){
            cout<<n-1<<endl;
        }
        else {
            cout<<max(0ll,n-2)<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}