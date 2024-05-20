#include <bits/stdc++.h>
using namespace std;
#define int long long
int Tan = 1, n, m, k;
void Solve()
{
   int x, y, ans = 0;
   cin >> n >> x;
   while (cin >> y)
   {
      if (x > y)
         ans += x - y;
      else
         x = y;
   }
   cout << ans << '\n';
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   Solve();
}
