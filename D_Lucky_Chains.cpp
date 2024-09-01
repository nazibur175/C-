#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> p(10000001, 0);
void sieve()
{
   for (int i = 2; i < p.size(); i++)
      if (p[i] == 0)
      {
         for (int j = i; j < p.size(); j += i)
            p[j] = i;
      }
}
set<ll> fact(ll c)
{
   set<ll> v;
   while (1)
   {
      if (p[c] == c)
      {
         v.insert(c);
         break;
      }
      v.insert(p[c]);
      c /= p[c];
   }
   return v;
}
void solve(ll tc)
{
   ll a, b;
   cin >> a >> b;
   if (b == a + 1)
      cout << -1 << "\n";
   else if (gcd(a, b) > 1)
      cout << 0 << "\n";
   else
   {
      ll c = b - a, mx = LLONG_MAX;
      set<ll> v = fact(c);
      for (auto x : v)
      {
        if (a % x == b % x)
            mx = min(mx, x - b % x);
         else if (x > c)
            break;
      }
      cout << mx << "\n";
   }
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   sieve();
   ll t = 1, i = 0;
   cin >> t;
   while (i++ < t)
      solve(i);
   return 0;
}