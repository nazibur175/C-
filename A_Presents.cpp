#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n+1]={0}; // 0 1 2 3 4
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        a[x]=i;
    }
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<endl;


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}