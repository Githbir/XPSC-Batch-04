#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
int a[205][205];
int call(int x, int y, int n, int m)
{
   int i = 0, sum = 0;
   while (x - i >= 0 && y - i >= 0)
      sum = sum + a[x - i][y - i++];

   i = 0;
   while (x - i >= 0 && y + i < m)
      sum = sum + a[x - i][y + i++];

   i = 0;
   while (x + i < n && y + i < m)
      sum = sum + a[x + i][y + i++];

   i = 0;
   while (x + i < n && y - i >= 0)
      sum = sum + a[x + i][y - i++];

   return sum - 3 * (a[x][y]);
}
void solve()
{
   cin >> n >> m;
   for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
         cin >> a[i][j];

   int ans = 0;
   for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
         ans = max(ans, call(i, j, n, m));
   cout << ans << endl;
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      solve();
}
