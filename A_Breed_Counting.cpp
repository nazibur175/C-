#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,q;
    cin>>n>>q;
    int a[n+9];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int b[n+9]={0};
    int c[n+9]={0};
    int d[n+9]={0};
    for(int i=1;i<=n;i++){
        if(a[i]==1)
            b[i]=b[i-1]+1;
        else b[i]=b[i-1];
    }
    for(int i=1;i<=n;i++){
        if(a[i]==2)
            c[i]=c[i-1]+1;
        else c[i]=c[i-1];
    }
    for(int i=1;i<=n;i++){
        if(a[i]==3)
            d[i]=d[i-1]+1;
        else d[i]=d[i-1];
    }
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<b[r]-b[l-1]<<" "<<c[r]-c[l-1]<<" "<<d[r]-d[l-1]<<endl;
    }
    


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
#ifndef ONLINE_JUDGE
        freopen("bcount.in", "r", stdin);
        freopen("bcount.out", "w", stdout);
    #endif
solve();

}