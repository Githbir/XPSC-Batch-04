#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll Tan = 1, n, k;
void Solve()
{
   cin >> n >> k;
   auto Fun = [&](ll mid)
   {
      return mid - (mid / n) >= k;
   };

   ll l = 1, r = 1e10, mid, ans;
   while (l <= r)
   {
      mid = l + (r - l) / 2;
      if (Fun(mid))
         ans = mid, r = mid - 1;
      else
         l = mid + 1;
   }
   cout << ans;
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Tan;
   while (Tan--)
   {
      Solve();
      cout << '\n';
   }
}
