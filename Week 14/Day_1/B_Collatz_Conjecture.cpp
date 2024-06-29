#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k;
void Sol()
{
   cin >> n >> m >> k;
   int t = m - n % m;
   while (k >= t)
   {
      k -= t;
      n += t;
      while (n % m == 0)
         n /= m;
      t = m - n % m;

      if (n == 1)
      {
         k %= t;
         n += k;
         k = 0;
         break;
      }
   }
   cout << n + k << endl;
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Test;
   while (Test--)
      Sol();
}
