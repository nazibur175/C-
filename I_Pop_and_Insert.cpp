#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        // case zero
        int mx = 0;
        int cnt = 0;
        int ans = 1e9;
        int fao = 0;
        for(int i = 0; i < n; i++){
            fao += ((s[i] == '1') ? 1: 2);
            if(s[i] == '0'){
                cnt++;
                mx = max(mx, cnt);
            }
            else cnt = 0;
        }
        ans = min(ans, fao - mx * 2);

        // case one
        mx = 0;
        cnt = 0;
        fao = 0;
        for(int i = 0; i < n; i++){
            fao += ((s[i] == '0') ? 1: 2);
            if(s[i] == '1'){
                cnt++;
                mx = max(mx, cnt);
            }
            else cnt = 0;
        }
        ans = min(ans, fao - mx * 2);
        cout << ans << endl;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}