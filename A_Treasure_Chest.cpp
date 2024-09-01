#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    {
        int n;
        cin >> n;
        vector<int>ar;
        vector<pair<vector<int>, vector<int>>>ans;
        for(int i = 0; i < n; i++) ar.push_back(i);
        do{
            // cout << "=>" << endl;
            vector<int>br;
            for(int i = 1; i < n; i++){
                br.push_back(ar[i - 1] ^ ar[i]);
                // cout << (ar[i - 1] ^ ar[i]) << " ";
            }
            // cout << endl;
            ans.push_back({br, ar});
            // for(auto x: ar) cout << x << " ";
            // cout << endl;
        }while(next_permutation(ar.begin(), ar.end()));
        sort(ans.begin(), ans.end());
        for(int i = 0; i < ans.size(); i++){
            cout << "=>" << endl;
            for(auto x: ans[i].first) cout << x << " ";
            cout << endl;
            for(auto x: ans[i].second) cout << x << " ";
            cout << endl;
        }
    }
    // for(int i = 0; i < )
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}