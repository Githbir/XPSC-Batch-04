#include <bits/stdc++.h>
using namespace std;
#define int long long
int Tan = 1, n, a, b;
void Solve()
{
   cin >> n;
   while (cin >> a >> b)
      if (2 * min(a, b) >= max(a, b) && (a + b) % 3 == 0)
         cout << "YES\n";
      else
         cout << "NO\n";
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   Solve();
}
