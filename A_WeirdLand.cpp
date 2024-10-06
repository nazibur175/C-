#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e9;
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int x,y,g;
        cin>>x>>y>>g;
        int lob = (N-g)*x;
        int hor = g*y;
        int gc = gcd(lob,hor);
        lob = lob/gc;
        hor = hor/gc;
        cout<<"Case "<<tt<<": ";
        cout<<lob<<"/"<<hor<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}