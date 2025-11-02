#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n, q;
    cin >> n >> q;
    map<int, int>mp;
    set<int>st;
    for(int i = 1; i <= n; i++){
        st.insert(i);
        mp[i]++;
    }
    // for(auto x: st) cout << x << " ";
    // cout << endl;
    while(q--){
        int x, y;
        cin >> x >> y;
        int ans = 0;
        vector<int>ar;
        for(auto z: st){
            if(z > x) break;
            // cout << z << " ";
            ans += mp[z];
            mp[y] += mp[z];
            ar.push_back(z);
        }
        for(auto z: ar){
            st.erase(z);
        }
        // cout << endl;
        cout << ans << endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}