#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a, b;
        cin >> a >> b;
        if(a==b)
            cout << 0 << " " << 0 << '\n';
        else
        {
            int g = abs(a-b);
            int m = min(a%g,g-a%g);
            cout << g << " " << m << '\n';
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}