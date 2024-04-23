#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll Tan = 1, n, m, c, sum, ans;
void Solve()
{
   cin >> n;
   ll a[n], R, L;
   for (ll i = -1; ++i < n;)
      cin >> a[i];
   sort(a, a + n);
   cin >> m;
   while (m--)
   {
      cin >> L >> R;
      auto i = lower_bound(a, a + n, L) - a;
      auto j = upper_bound(a, a + n, R) - a;
      cout << j - i << ' ';
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
