#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a,b,c;
        cin>>a>>b>>c;
        int ans = a+ (b+c)/3 + ((b+c)%3!=0);
        if(b%3==0 || 3-(b%3)<=c)
            cout<<ans<<endl;
        else 
            cout<<"-1"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}