#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a,b,c,d;
        cin >> a>>b>>c>>d;
        int ad=a*d;
        int cb=c*b;
        if(ad==cb)
        cout <<0 << endl;
        else if(ad==0|| cb==0 || ad%cb==0 || cb% ad==0)
        cout << 1 << endl;
        else
        cout << 2<< endl;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}