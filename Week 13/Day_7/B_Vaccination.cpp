#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t, n, p, d, w;
   string s;
   cin >> t;
   while (t--)
   {
      cin >> n >> p >> d >> w;
      int a[n], x = -1, r = 0, c = 0;
      for (int i = 0; i < n; i++)
      {
         cin >> a[i];
         if (a[i] > x || r == 0)
         {
            x = a[i] + d + w;
            r = p;
            c++;
         }
         r--;
      }
      cout << c << endl;
   }
}