#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll t, n, x, y;
void solve()
{
   cin >> n;
   vector<vector<ll>> v(2, vector<ll>(n + 1, 0));
   ll all_y = 0, all_x = 0;

   for (int i = 0; i < n; ++i)
   {
      cin >> x >> y;
      if (y == 0)
         v[0][x] = 1, all_y++;
      else
         v[1][x] = 1, all_x++;
   }

   ll ans = 0;
   for (int i = 0; i <= n; ++i)
   {
      if (v[0][i] == 1 and v[1][i] == 1)
      {
         ans += (all_x - 1);
         ans += (all_y - 1);
      }
      if (i > 0 and i < n)
      {
         if (v[0][i] == 1 and v[1][i - 1] == 1 and v[1][i + 1] == 1)
            ans++;
         if (v[1][i] == 1 and v[0][i - 1] == 1 and v[0][i + 1] == 1)
            ans++;
      }
   }
   cout << ans << "\n";
}
int32_t main()
{
   cin >> t;
   while (t--)
      solve();
}
//