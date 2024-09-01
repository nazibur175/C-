#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
    int n;
    cin >> n;

    int sum = 0, c1 = 0;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin>>x;
      sum += x;
      if (x == 1) c1++;
    }
        
    if (sum >= c1 + n && n > 1) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
    }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}