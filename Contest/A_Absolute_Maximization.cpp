#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int x=a[0];
        int y=a[0];
        for(int i=1;i<n;i++){
            x|=a[i];
        }
        for(int i=1;i<n;i++){
            y&=a[i];
        }
        cout<<x-y<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}