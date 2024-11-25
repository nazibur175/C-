#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    string s;
    cin>>s;

    int n = s.length();
    if (n % 2 != 0) {
        cout << "No" << endl;
        return ;
    }

    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    
    for (int i = 0; i < n; i += 2) {
        if (s[i] != s[i + 1]) {
            cout << "No" << endl;
            return ;
        }
    }


    for (auto x : freq) {
        if (x.second != 2) {
            cout << "No" << endl;
           return ;
        }
    }

    cout << "Yes" << endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}