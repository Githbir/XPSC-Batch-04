#include <bits/stdc++.h>
using namespace std;
#define e '\n'
#define int long long
int t = 1, n, m, k, x;
void Solve()
{
   cin >> n >> m >> k;
   int x = (n + k - 1) / k;
   int y = (m + k - 1) / k;
   int z = max(x, y);
   int f = 0;
   if (x > y)
      f = 1;
   cout << (z * 2) - f << e;
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> t;
   while (t--)
      Solve();
}