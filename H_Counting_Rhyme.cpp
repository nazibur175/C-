#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
const int N = 1e6 + 9;
int freq[N];
int cnt[N];
int final[N];
void solve()
{
    test
    {
        int n;
        cin >> n;
        int a[n + 1];
        int mx = 0;
        for (int i = 0; i <= n; i++)
        {
            freq[i] = 0;
            cnt[i] = 0;
            final[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
            mx = max(a[i], mx);
        }

        // int ans= (n*(n-1)*(n-2))/6;
        for (int i = 2; i <= mx; i++)
        {
            for (int j = i; j <= mx; j += i)
            {
                cnt[i] += freq[j];
            }
        }
        int ans = (n * (n - 1)) / 2;
        int sum = 0;
        for (int i = mx; i >= 2; i--)
        {
            int temp = (cnt[i] * (cnt[i] - 1)) / 2;
            for (int j = i * 2; j <= mx; j += i)
            {
                temp -= final[j];
            }
            final[i] = temp;
            sum += final[i];
        }
        final[1] = ans - sum;
        ans = 0;
        // cout<<final[1]<<endl;
        for (int i = 1; i <= mx; i++)
        {
            if (freq[i])
            {
                for (int j = i; j <= mx; j += i)
                {
                    final[j] = 0;
                }
            }
            // if(final[i]) cout<<i<<" ";
            ans += final[i];
        }
        // cout<<endl;
        cout << ans << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}