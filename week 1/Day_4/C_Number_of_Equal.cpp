#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   cin >> n >> m;
   ll a[n], b[m];
   for (int i = 0; i < n; i++)
      cin >> a[i];

   for (int i = 0; i < m; i++)
      cin >> b[i];

   ll l = 0, r = 0, ans = 0;
   while (l < n && r < m)
   {
      int c1 = 0, c2 = 0, x = a[l];
      while (a[l] == x && l < n)
         c1++, l++;

      while (b[r] < x && r < m)
         r++;

      while (b[r] == x && r < m)
         c2++, r++;

      ans = ans + (1LL * c1 * c2);
   }
   cout << ans << '\n';
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   solve();
}
