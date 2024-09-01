#include <bits/stdc++.h>
#define ll long long int
#define printvec(a) \
    for (auto i : a) \
    cout << i << " "; \
    cout << endl;
#define inputVec(a) \
for(auto &i : a)cin >> i;         
#define printmap(mp)    \
    for(auto i : mp)     \
    cout<<i.first<<" "<<i.second<<endl;  
#define vl vector<ll>
#define vs vector<string>
#define full(v) v.begin(), v.end()
#define pb push_back
#define pll pair<ll, ll>
#define toInt(c) (c - '0')
#define endl '\n'
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;  
#define ordered_set tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> 

bool comparePairsDescending(const pll &a, const pll &b) {
    return a.second < b.second;  // ascending of second element
}
 
void solve() {
    ll n; cin >> n;
    vector<pair<ll, ll>> pairs;
    ll x;
    for (ll i = 1; i <= n; i++) {
        cin >> x;
        if(x < i){
            pairs.pb({i, x});
        }
    }
    
   //reverse(full(pairs));
   // printmap(pairs)
    
    ll ans = 0;
    ordered_set st;
    for (ll i = pairs.size() - 1; i >= 0; i--) {  
        ll tmp = st.order_of_key(pairs[i].first + 1);
        ans += st.size() - tmp;
        st.insert(pairs[i].second);
    } 

    cout << ans << endl;
}   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--)
    solve();   

    return 0;
}
