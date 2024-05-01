#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll Tan = 1, n, a, b;
void Solve()
{
   cin >> n >> a >> b;
   auto ok = [&](ll mid)
   {
      return (a / mid) + (b / mid) >= n;
   };

   ll l = 1, r = min(a, b), mid, ans = 0;
   while (l <= r)
   {
      mid = l + (r - l) / 2;
      if (ok(mid))
         ans = mid, l = mid + 1;
      else
         r = mid - 1;
   }
   cout << ans;
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   // cin >> Tan;
   while (Tan--)
   {
      Solve();
      cout << '\n';
   }
}
