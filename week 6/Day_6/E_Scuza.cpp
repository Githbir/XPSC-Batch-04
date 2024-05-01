#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll Tan = 1, n, q, x;
void Solve()
{
   cin >> n >> q;
   ll a[n], p[n];
   for (ll i = 0; i < n; i++)
      cin >> a[i];

   p[0] = a[0];
   for (int i = 1; i < n; i++)
      p[i] = p[i - 1] + a[i];

   for (ll i = 1; i < n; i++)
      a[i] = max(a[i - 1], a[i]);

   while (q--)
   {
      cin >> x;
      auto i = upper_bound(a, a + n, x) - a;
      if (i - 1 < 0)
         cout << 0 << " ";
      else
         cout << p[i - 1] << " ";
   }
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
