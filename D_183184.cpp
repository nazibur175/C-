#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int t;
    cin >> t;
    vector<string>s;
    for(int i = 1; i <= 100; i++){
        s.push_back(to_string(i * i));
    }
    sort(s.begin(), s.end());
    for(int i = 0; i < 100; i++){
        cout << s[i] << endl;
    }
    while(t--){
        int c, d;
        cin >> c >> d;
        auto x = lower_bound(s.begin(), s.end(), to_string(c) + to_string(c + 1));
        auto y = upper_bound(s.begin(), s.end(), to_string(c) + to_string(c + d));
        cout << y - x << endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}