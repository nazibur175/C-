#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int mx=max(a,b);
        int mn=min(a,b);
        int xx=c-a;
        int yy=d-b;
        int mmx=max(xx,yy);
        int mmn=min(xx,yy);
        if(mx<=(2*(mn+1)) && mmx<=(2*(mmn+1))){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}