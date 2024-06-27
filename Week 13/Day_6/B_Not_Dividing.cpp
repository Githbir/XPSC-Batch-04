#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k;
void Sol()
{
   cin >> n;
   int a[n];
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
      if (a[i] == 1)
         a[i] = 2;
      if (i > 0)
         if (a[i] % a[i - 1] == 0)
            a[i]++;
   }
   for (int i = 0; i < n; i++)
   {
      cout << a[i];
      if (i == n - 1)
         cout << endl;
      else
         cout << " ";
   }
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Test;
   while (Test--)
      Sol();
}
