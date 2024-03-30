#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   cin >> n >> m;
   ll a[n], x, y, z, pre[n];
   for (int i = 0; i < n; i++)
      cin >> a[i];

   pre[0] = a[0];
   for (int i = 1; i < n; i++)
      pre[i] = pre[i - 1] + a[i];

   while (m--)
   {
      cin >> x >> y >> z;
      ll sum = pre[n - 1];
      if (x == 1)
         sum = sum - (pre[y - 1]);
      else
         sum = sum - (pre[y - 1] - pre[x - 2]);

      ll len = (y - x) + 1;
      sum = sum + len * z;

      if (sum % 2 == 1)
         cout << "YES\n";
      else
         cout << "NO\n";
   }
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      solve();
}
