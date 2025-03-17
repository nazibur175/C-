#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

int query(int x,int y,int z) {
    cout<<"? "<<x<<" "<<y<<" "<<z<<endl;
    cout<<flush;
    int res; 
    cin >> res;
    return res;
 }
  
 void solve () {
    test{
        int n; 
        cin >> n;
        vector<int> v(3);
        v[0] = 1, v[1] = 2, v[2] = 3;
        int cnt = 0;
        while (cnt <= 75) {
            int res = query(v[0], v[1], v[2]);
            if (res == 0) {
                cout << "! " << v[0] << " " << v[1] << " " << v[2] << endl;
                break;
            }
  
        v[rand() % 3] = res;
        cnt++;
        }
    }
  
 }

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}