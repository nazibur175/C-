#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m,x,y,d;
        cin>>n>>m>>x>>y>>d;
        int d1=y-1;
        int d2=m-y;
        int d3=x-1;
        int d4=n-x;
        if((d>=d3||d>=d2)&&(d>=d1||d>=d4))
            cout<<-1<<endl;
        else
            cout<<n+m-2<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}