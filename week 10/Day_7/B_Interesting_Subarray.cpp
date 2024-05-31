#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k;
void Sol()
{
   cin >> n;
   int a[n];
   for (int i = 0; i < n; i++)
      cin >> a[i];

   for (int i = 1; i < n; i++)
      if (abs(a[i] - a[i - 1]) >= 2)
      {
         cout << "YES\n"<< i << ' ' << i + 1 << endl;
         return;
      }
   cout << "NO\n";
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Test;
   while (Test--)
      Sol();
}
