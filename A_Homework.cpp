#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
        test{
            int n;
            cin>>n;
            string s;
            cin>>s;
            int m;
            string b,c;
            cin>>m>>b>>c;
            deque<char> dq(s.begin(), s.end());
            for (int i = 0; i < m; ++i) {
                if (c[i] == 'V') dq.push_front(b[i]);
                else dq.push_back(b[i]);
            }
            string ans;
            for(char ch : dq) ans.push_back(ch);
            cout << ans << '\n';
            }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}