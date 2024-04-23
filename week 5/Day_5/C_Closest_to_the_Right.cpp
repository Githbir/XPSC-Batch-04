#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll Tan = 1, n, m, x, c, sum, ans;
void Solve()
{
   cin >> n >> m;
   ll a[n];
   for (int i = 0; i < n; ++i)
      cin >> a[i];
   while (m--)
   {
      cin >> x;
      auto i = lower_bound(a, a + n, x) - a;
      cout << i + 1 << '\n';
   }
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   // cin >> Tan;
   while (Tan--)
   {
      c = sum = ans = 0;
      Solve();
      cout << '\n';
   }
}
