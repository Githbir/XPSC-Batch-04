#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k;
void Sol()
{
   cin >> n;
   int a1[n], a2[n], a3[n];
   for (int i = 0; i < n; i++)
      cin >> a1[i];
   for (int i = 0; i < n; i++)
      cin >> a2[i];
   for (int i = 0; i < n; i++)
      a3[i] = (a2[i] - a1[i]);

   sort(a3, a3 + n);
   int k = -1;
   for (int i = n - 1; i >= 0; i--)
      if (a3[i] < 0)
      {
         k = i;
         break;
      }
   int p = k;
   int ans = (n - 1) - k;
   int y = k + 1;
   while (1)
   {
      if ((a3[y] + a3[k]) >= 0)
      {
         ans++;
         y++;
         k--;
      }
      else
         y++;
      if (k < 0 || y == n)
         break;
   }
   if (p == (n - 1))
      cout << "0" << endl;
   else if (p == -1)
      cout << n / 2 << endl;
   else
      cout << ans / 2 << endl;
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Test;
   while (Test--)
      Sol();
}
