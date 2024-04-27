#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll Tan = 1, n, ans, t, a[2000005];
void Solve()
{
   cin >> n >> t;
   for (int i = 0; i < n; i++)
      cin >> a[i];

   auto ok = [&](ll mid)
   {
      ll total = 0;
      for (int i = 0; i < n; i++)
      {
         total += (mid / a[i]);
         if (total >= t)
            return true;
      }
      return false;
   };

   ll l = 1, r = 1e18, mid;
   while (l <= r)
   {
      mid = l + (r - l) / 2;
      if (ok(mid))
         ans = mid, r = mid - 1;
      else
         l = mid + 1;
   }
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   Solve();
   cout << ans << '\n';
}
