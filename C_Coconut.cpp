#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n+9]={0};
    for(int i=1;i<=n-1;i++){
        int x;
        cin>>x;
        a[x]++;
    }
    for(int i=1;i<=n;i++){
        if(a[i]==0) {
            cout<<i<<endl;
            break;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}