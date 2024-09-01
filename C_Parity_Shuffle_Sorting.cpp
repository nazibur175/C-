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
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        cout<<n-1<<endl;
        cout<<1<<" "<<n<<endl;
        int x;
        if((a[1]+a[n])%2==0)
            x=a[n];
        else x=a[1];
        for(int i=2;i<=n-1;i++){
            if((x+a[i])%2==0){
                cout<<i<<" "<<n<<endl;
            }
            else cout<<1<<" "<<i<<endl;
        }

    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}