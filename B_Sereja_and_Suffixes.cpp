#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,m;
    cin>>n>>m;
    int pre[n+1]={0};
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];

    set<int>s;
    for(int i=n;i>=1;i--){
        s.insert(a[i]);
        int sz=s.size();
        pre[i]=sz;
    }
    while (m--)
    {
        int l;
        cin>>l;
        cout<<pre[l]<<endl;
    }
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}