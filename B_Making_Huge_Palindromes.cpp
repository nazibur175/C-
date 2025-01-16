#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
vector<int> create_lps(string &s)
{
    int n = s.size();
    vector<int> lps(n);
    int in = 0;
    for (int i = 1; i < n;)
    {
        if (s[i] == s[in])
        {
            lps[i] = in + 1;
            in++;
            i++;
        }
        else
        {
            if (in != 0)
            {
                in = lps[in - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}
void solve()
{
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        string s;
        cin>>s;
        string ss=s;
        reverse(ss.begin(),ss.end());
        string sss=ss+"#"+s;
        vector<int>lps=create_lps(sss);
        int temp=lps.back();
        int ans=(s.size()-temp+s.size());
        cout << "Case " << tt << ": ";
        cout << ans << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}