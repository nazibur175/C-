#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
        int n;
        string s,t;
        cin >> s >> t;
        reverse(t.begin(), t.end());
        set<char> baatil;
        for(auto &cv : t){
            if(baatil.find(cv) != baatil.end()){
                cout << "NO" << '\n';
                return ;
            }
            while(s.size() && s.back() != cv){
                baatil.insert(s.back());
                s.pop_back();
            }
            if(s.size() == 0){
                cout << "NO" << '\n';
                return ;
            }
            s.pop_back();
        }
        cout << "YES" << '\n';
    }

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
 test{
    solve();
 }

}