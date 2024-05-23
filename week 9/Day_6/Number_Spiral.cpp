#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k, ans;
void TANBIR()
{
   cin >> n >> m;
   if (m > n)
   {
      if (m % 2 == 0)
         ans = (m - 1) * (m - 1) + 1 + (n - 1);
      else
         ans = m * m - (n - 1);
   }
   else if (n % 2 == 1)
      ans = (n - 1) * (n - 1) + 1 + (m - 1);
   else
      ans = n * n - (m - 1);

   cout << ans << '\n';
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Test;
   while (Test--)
      TANBIR();
}
