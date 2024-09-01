#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int p=0;
    int n=0;
    test{
        int x,y;
        cin>>x>>y;
        
        if(x>0) p++;
        else n++;
    }
        if(p==0 || p==1 || n==0 || n==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}