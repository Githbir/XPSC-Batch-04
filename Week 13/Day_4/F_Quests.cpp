#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, c, d;
void Sol()
{
   cin >> n >> c >> d;
   int a[n];
   for (int i = 0; i < n; i++)
      cin >> a[i];

   sort(a, a + n, greater<int>());
   int count = 0;
   for (int i = 0; i < min(d, n); i++)
      count += a[i];

   if (count >= c)
   {
      cout << "Infinity" << endl;
      return;
   }
   if (a[0] * d < c)
   {
      cout << "Impossible" << endl;
      return;
   }
   int k, mid, low = 0, high = d - 2;
   while (low <= high)
   {
      int mid = low + (high - low) / 2;
      int m = mid, j = 0, cnt = 0;
      for (int i = 0; i < d; i++)
      {
         if (j < n)
            cnt += a[j];
         j++;
         if (m == 0)
         {
            j = 0;
            m = mid + 1;
         }
         m--;
      }
      if (cnt >= c)
      {
         k = mid;
         low = mid + 1;
      }
      else
         high = mid - 1;
   }
   cout << k << endl;
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Test;
   while (Test--)
      Sol();
}
