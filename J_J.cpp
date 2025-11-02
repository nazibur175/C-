#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

string tobinary(int x)
{
    string s = "";
    while (x)
    {
        if (x & 1)
        {
            s.push_back('1');
        }
        else
        {
            s.push_back('0');
        }
        x /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}

int tonum(string s)
{
    int x = 0, p = 1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            x += p;
        }
        p *= 2;
    }
    return x;
}

void solve()
{
    int n;
    cin >> n;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if ((n & (n - 1)) == 0)
    {
        cout << n - 1 << endl;
        return;
    }
    string s = tobinary(n);
    int len = s.size();

    if (len & 1)
    {
        int h = len / 2, d = 2;
        string res;
        for (int i = 0; i <= h; i++)
        {
            res.push_back(s[i]);
        }
        for (int i = h + 1; i < len; i++)
        {
            res.push_back(s[i - d]);
            d += 2;
        }
        int v = tonum(res);
        if (v <= n)
        {
            cout << v << endl;
        }
        else
        {
            for (int i = h; i >= 0; i--)
            {
                if (s[i] == '1')
                {
                    res[i] = '0';
                    res[h + (h - i)] = '0';
                    break;
                }
                else
                {
                    res[i] = '1';
                    res[h + (h - i)] = '1';
                }
            }
            int v = tonum(res);
            cout << v << endl;
        }
    }
    else
    {
        int h = len / 2, d = 1;
        string res;
        for (int i = 0; i < h; i++)
        {
            res.push_back(s[i]);
        }
        for (int i = h; i < len; i++)
        {
            res.push_back(s[i - d]);
            d += 2;
        }
        int v = tonum(res);
        if (v <= n)
        {
            cout << v << endl;
        }
        else
        {
            for (int i = h - 1; i >= 0; i--)
            {
                if (s[i] == '1')
                {
                    res[i] = '0';
                    res[h + (h - (i + 1))] = '0';
                    break;
                }
                else
                {
                    res[i] = '1';
                    res[h + (h - (i + 1))] = '1';
                }
            }
            int v = tonum(res);
            cout << v << endl;
        }
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}