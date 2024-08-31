#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, i, j, k, l, m = 0;
      cin >> n;
      int arr[n], ans[n];
      for (i = 0; i < n; i++)
      {
         cin >> arr[i];
         ans[i] = 0;
      }
      for (i = n - 1; i >= 0; i--)
      {
         if (arr[i] > m)
            m = arr[i];
         if (m > 0)
         {
            ans[i] = 1;
            m--;
         }
         else
            ans[i] = 0;
      }
      for (i = 0; i < n; i++)
         cout << ans[i] << ' ';
      cout << endl;
   }
}
