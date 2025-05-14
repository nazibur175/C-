#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        int cntx = (m-n*b)/(a-b);
        int temp = cntx*a + (n-cntx)*b;
        //cout<<cntx<<endl;
        if(temp==m && cntx<=n && cntx>=0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}