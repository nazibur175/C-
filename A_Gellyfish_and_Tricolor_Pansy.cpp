#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        a=min(a,c);
        b=min(b,d);
        if(a>=b) cout<<"Gellyfish"<<endl;
        else cout<<"Flower"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}