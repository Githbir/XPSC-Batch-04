#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k;
void Sol()
{
   cin >> n >> k;
   int c = 1, p = 0;
   while (1)
   {
      int o = (n + 1) / 2;
      if ((p + o) < k)
      {
         p += o;
         n -= o;
         c *= 2;
      }
      else
         break;
   }
   p++;
   int q = 2 * c;
   while (p < k)
   {
      c += q;
      p++;
   }
   cout << c << '\n';
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Test;
   while (Test--)
      Sol();
}
