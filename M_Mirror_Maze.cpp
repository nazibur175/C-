#include <algorithm>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;
int n, m;
bool isvalid(int x, int y)
{
   if (x > n || x < 1 || y > m || y < 1)
      return 0;
   return 1;
}
int32_t main()
{

   cin >> n >> m;
   int cnt = 0;
   char ch[n + 2][m + 2];
   int vis[n + 2][m + 2];
   for (int i = 1; i <= n; i++)
      for (int j = 1; j <= m; j++)
         vis[i][j] = 0;
   for (int i = 1; i <= n; i++)
      for (int j = 1; j <= m; j++)
      {
         cin >> ch[i][j];
         if (ch[i][j] == '/' || ch[i][j] == '\\')
            cnt++;
      }
   vector<string> out;
   for (int i = 1; i <= m; i++)
   {
      int l = 1, r = i;
      int dir = 1;
      int ans = 0;
      while (1)
      {
         if (ch[l][r] == '/' && dir == 1)
            vis[l][r] = 1, ans++, r--, dir = 4;
         else if (ch[l][r] == '/' && dir == 2)
            vis[l][r] = 1, ans++, r++, dir = 3;
         else if (ch[l][r] == '/' && dir == 3)
            vis[l][r] = 1, ans++, l--, dir = 2;
         else if (ch[l][r] == '/' && dir == 4)
            vis[l][r] = 1, ans++, l++, dir = 1;

         else if (ch[l][r] == '\\' && dir == 1)
            vis[l][r] = 1, ans++, r++, dir = 3;
         else if (ch[l][r] == '\\' && dir == 2)
            vis[l][r] = 1, ans++, r--, dir = 4;
         else if (ch[l][r] == '\\' && dir == 3)
            vis[l][r] = 1, ans++, l++, dir = 1;
         else if (ch[l][r] == '\\' && dir == 4)
            vis[l][r] = 1, ans++, l--, dir = 2;
         else
         {
            if (dir == 1)
               l++;
            else if (dir == 2)
               l--;
            else if (dir == 3)
               r++;
            else if (dir == 4)
               r--;
         }
         // cout << l << ' ' << r << ' ' << ans << endl;
         if (!isvalid(l, r) || ans> 2*cnt)
            break;
      }
      ans = 0;
      for (int i = 1; i <= n; i++)
         for (int j = 1; j <= m; j++)
            if (vis[i][j] == 1)
               ans++;
      for (int i = 1; i <= n; i++)
         for (int j = 1; j <= m; j++)
            vis[i][j] = 0;
      if (ans == cnt)
         out.push_back('N' + to_string(i));
   }
   for (int i = 1; i <= n; i++)
      for (int j = 1; j <= m; j++)
         vis[i][j] = 0;
   // 2................................................................

   for (int i = 1; i <= m; i++)
   {
      int l = n, r = i;
      // cout<<"---->"<<l<<' '<<r<<endl;
      int dir = 2;
      int ans = 0;
      while (1)
      {
         if (ch[l][r] == '/' && dir == 1)
            vis[l][r] = 1, ans++, r--, dir = 4;
         else if (ch[l][r] == '/' && dir == 2)
            vis[l][r] = 1, ans++, r++, dir = 3;
         else if (ch[l][r] == '/' && dir == 3)
            vis[l][r] = 1, ans++, l--, dir = 2;
         else if (ch[l][r] == '/' && dir == 4)
            vis[l][r] = 1, ans++, l++, dir = 1;

         else if (ch[l][r] == '\\' && dir == 1)
            vis[l][r] = 1, ans++, r++, dir = 3;
         else if (ch[l][r] == '\\' && dir == 2)
            vis[l][r] = 1, ans++, r--, dir = 4;
         else if (ch[l][r] == '\\' && dir == 3)
            vis[l][r] = 1, ans++, l++, dir = 1;
         else if (ch[l][r] == '\\' && dir == 4)
            vis[l][r] = 1, ans++, l--, dir = 2;
         else
         {
            if (dir == 1)
               l++;
            else if (dir == 2)
               l--;
            else if (dir == 3)
               r++;
            else if (dir == 4)
               r--;
         }
         // cout<<l<<' '<<r<<' '<<ans<<endl;
         if (!isvalid(l, r) || ans> 2*cnt)
            break;
      }
      ans = 0;
      for (int i = 1; i <= n; i++)
         for (int j = 1; j <= m; j++)
            if (vis[i][j] == 1)
               ans++;
      for (int i = 1; i <= n; i++)
         for (int j = 1; j <= m; j++)
            vis[i][j] = 0;
      if (ans == cnt)
         out.push_back('S' + to_string(i));
   }
   for (int i = 1; i <= n; i++)
      for (int j = 1; j <= m; j++)
         vis[i][j] = 0;
   // 3.....................................................................

   for (int i = 1; i <= n; i++)
   {
      int l = i, r = 1;
      int dir = 3;
      int ans = 0;
      while (1)
      {
         if (ch[l][r] == '/' && dir == 1)
            vis[l][r] = 1, ans++, r--, dir = 4;
         else if (ch[l][r] == '/' && dir == 2)
            vis[l][r] = 1, ans++, r++, dir = 3;
         else if (ch[l][r] == '/' && dir == 3)
            vis[l][r] = 1, ans++, l--, dir = 2;
         else if (ch[l][r] == '/' && dir == 4)
            vis[l][r] = 1, ans++, l++, dir = 1;

         else if (ch[l][r] == '\\' && dir == 1)
            vis[l][r] = 1, ans++, r++, dir = 3;
         else if (ch[l][r] == '\\' && dir == 2)
            vis[l][r] = 1, ans++, r--, dir = 4;
         else if (ch[l][r] == '\\' && dir == 3)
            vis[l][r] = 1, ans++, l++, dir = 1;
         else if (ch[l][r] == '\\' && dir == 4)
            vis[l][r] = 1, ans++, l--, dir = 2;
         else
         {
            if (dir == 1)
               l++;
            else if (dir == 2)
               l--;
            else if (dir == 3)
               r++;
            else if (dir == 4)
               r--;
         }
        if (!isvalid(l, r) || ans> 2*cnt)
            break;
      }
      ans = 0;
      for (int i = 1; i <= n; i++)
         for (int j = 1; j <= m; j++)
            if (vis[i][j] == 1)
               ans++;
      for (int i = 1; i <= n; i++)
         for (int j = 1; j <= m; j++)
            vis[i][j] = 0;
      if (ans == cnt)
         out.push_back('W' + to_string(i));
   }
   for (int i = 1; i <= n; i++)
      for (int j = 1; j <= m; j++)
         vis[i][j] = 0;
   // 4>.........................................................................
   for (int i = 1; i <= n; i++)
   {
      int l = i, r = m;
      int dir = 4;
      int ans = 0;
      while (1)
      {
        if(!isvalid(l,r)) break;
         if (ch[l][r] == '/' && dir == 1)
            vis[l][r] = 1, ans++, r--, dir = 4;
         else if (ch[l][r] == '/' && dir == 2)
            vis[l][r] = 1, ans++, r++, dir = 3;
         else if (ch[l][r] == '/' && dir == 3)
            vis[l][r] = 1, ans++, l--, dir = 2;
         else if (ch[l][r] == '/' && dir == 4)
            vis[l][r] = 1, ans++, l++, dir = 1;

         else if (ch[l][r] == '\\' && dir == 1)
            vis[l][r] = 1, ans++, r++, dir = 3;
         else if (ch[l][r] == '\\' && dir == 2)
            vis[l][r] = 1, ans++, r--, dir = 4;
         else if (ch[l][r] == '\\' && dir == 3)
            vis[l][r] = 1, ans++, l++, dir = 1;
         else if (ch[l][r] == '\\' && dir == 4)
            vis[l][r] = 1, ans++, l--, dir = 2;
         else
         {
            if (dir == 1)
               l++;
            else if (dir == 2)
               l--;
            else if (dir == 3)
               r++;
            else if (dir == 4)
               r--;
         }
        if (!isvalid(l, r) || ans> 2*cnt)
            break;
      }
      ans = 0;
      for (int i = 1; i <= n; i++)
         for (int j = 1; j <= m; j++)
            if (vis[i][j] == 1)
               ans++;
      for (int i = 1; i <= n; i++)
         for (int j = 1; j <= m; j++)
            vis[i][j] = 0;
      if (ans == cnt)
         out.push_back('E' + to_string(i));
   }
   cout << out.size() << endl;
   for(int i=0;i<out.size();i++){
    cout<<out[i];
    if(i!=out.size()-1) cout<<' ';
   }
   if(out.size()!=0) cout<<endl;

}