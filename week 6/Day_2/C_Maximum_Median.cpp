#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Tan = 1, n, k, c, ans;
void Solve()
{
   cin >> n >> k;
   ll a[n];
   for (int i = 0; i < n; i++)
      cin >> a[i];
   sort(a, a + n);

   auto FUN = [&](ll mid)
   {
      c = 0;
      for (int i = (n / 2); i < n; i++)
         if (a[i] < mid)
            c += mid - a[i];
      return c <= k;
   };

   ll l = 1, r = 2e9, mid;
   while (l <= r)
   {
      mid = l + (r - l) / 2;
      if (FUN(mid))
         ans = mid, l = mid + 1;
      else
         r = mid - 1;
   }
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   Solve();
   cout << ans << '\n';
}
