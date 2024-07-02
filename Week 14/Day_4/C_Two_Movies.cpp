#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve()
{
   int n;
   cin >> n;
   int ar[n], br[n];
   for (int i = 0; i < n; i++)
      cin >> ar[i];
   for (int i = 0; i < n; i++)
      cin >> br[i];

   int a = 0, b = 0;
   int c = 0, m = 0;
   for (int i = 0; i < n; i++)
      if (ar[i] == -1 && br[i] == -1)
         c++;
      else if (ar[i] == 1 && br[i] == 1)
         m++;
      else if (ar[i] == 1 || br[i] == 1)
         if (ar[i] == 1)
            a++;
         else
            b++;

   while (c--)
      if (a > b)
         a--;
      else
         b--;

   while (m--)
      if (a > b)
         b++;
      else
         a++;
   cout << min(a, b) << endl;
}
int32_t main()
{
   int t = 1;
   cin >> t;
   while (t--)
      solve();
}