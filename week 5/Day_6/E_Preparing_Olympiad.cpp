#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll Tan = 1, n, m, k, c, sum, ans;
void Solve()
{
   ll l, r, x;
   cin >> n >> l >> r >> x;
   ll a1[n];
   for (ll i = -1; ++i < n;)
      cin >> a1[i];

   for (ll bitmask = -1; ++bitmask < (1 << n);)
   {
      sum = 0;
      ll mn = INT_MAX;
      ll mx = INT_MIN;
      for (int j = 0; j < n; j++)
         if ((bitmask >> j) & 1)
         {
            sum += a1[j];
            mn = min(mn, a1[j]);
            mx = max(mx, a1[j]);
         }
      if ((sum >= l && sum <= r) && (mx - mn) >= x)
         c++;
   }
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   // cin >> Tan;
   while (Tan--)
   {
      c = sum = ans = 0;
      Solve();
      cout << c << '\n';
   }
}
