#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;

      if (n < 3)
         for (int i = 1; i <= n; ++i)
            cout << i << " \n"[i == n];
      else
      {
         vector<int> a(n + 1, 0);
         a[1] = 2, a[(n + 1) / 2] = 1, a[n] = 3;
         int c = 4;
         for (int i = 1; i <= n; ++i)
            if (a[i] == 0)
               a[i] = c++;

         for (int i = 1; i <= n; ++i)
            cout << a[i] << " \n"[i == n];
      }
   }
}