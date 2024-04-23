#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll Tan = 1, n, m, k, a1[1000005], a2[1000005], cc, sum, ans, a, b;
void Solve()
{
   cin >> a >> b >> n;
   ans = b;
   for (ll i = -1; ++i < n;)
      cin >> a1[i];

   for (int i = 0; i < n; i++)
      ans += min(a1[i], a - 1);
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Tan;
   while (Tan--)
   {
      cc = sum = ans = 0;
      Solve();
      cout << ans << '\n';
   }
}
