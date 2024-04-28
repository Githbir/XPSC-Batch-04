#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll Tan = 1, n, m;
void Solve()
{
   cin >> n >> m;
   ll a[n];
   for (int i = 0; i < n; i++)
      cin >> a[i];

   sort(a, a + n);
   ll l = 0, r = INT_MAX, ans;
   while (l <= r)
   {
      ll mid = l + (r - l) / 2;
      ll sum = 0;
      for (ll i = 0; i < n; i++)
         if (a[i] < mid)
            sum += (mid - a[i]);

      if (sum <= m)
         l = mid + 1, ans = mid;
      else
         r = mid - 1;
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
