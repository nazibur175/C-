#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define mod 1000000007
#define test int t; cin>>t; while(t--)
void solve() {
    multiset<int>sleft;
    multiset<int>sright;
    test {
        char ch;
        int l, r;
        cin >> ch >> l >> r;
        if (ch == '+') {
            sleft.insert(l);
            sright.insert(r);
        } else {
            sleft.erase(sleft.find(l));
            sright.erase(sright.find(r));
        }
        if(sleft.empty() || sright.empty()){
            cout<<"NO"<<endl;
            continue;
        }
        int maxleft=*(--sleft.end());
        int minright=*(sright.begin());
        if(minright<maxleft) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
