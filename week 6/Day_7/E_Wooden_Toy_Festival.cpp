#include <bits/stdc++.h>
using namespace std;
#define nn cout << '\n';
#define ll long long int
ll Tan = 1, n, m;
void Solve()
{
   cin >> n;
   ll a[n];
   for (ll i = 0; i < n; i++)
      cin >> a[i];
   sort(a, a + n);

   auto ok = [&](int mid)
   {
      int l = 0, cnt = 1;
      for (int r = 0; r < n; r++)
         if ((a[r] - a[l]) > (2 * mid))
         {
            cnt++;
            l = r;
         }
      return cnt <= 3;
   };
   int l = 0, r = 1e9, mid, ans = 0;
   while (l <= r)
   {
      mid = l + (r - l) / 2;
      if (ok(mid))
      {
         ans = mid;
         r = mid - 1;
      }
      else
         l = mid + 1;
   }
   cout << ans;
   nn
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Tan;
   while (Tan--)
      Solve();
}
