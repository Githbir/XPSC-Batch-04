#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k;
void Sol()
{
   cin >> n >> k;
   vector<int> v(n);
   vector<vector<int>> a(n, vector<int>(40, 0));
   for (int i = 0; i < n; i++)
      cin >> v[i];

   for (int i = 0; i < n; i++)
      for (int j = 0; j < 40; j++)
      {
         if (v[i] == 0)
            break;
         if (v[i] & 1 == 1)
            a[i][j] = 1;
         v[i] = v[i] >> 1;
      }
   int total[31];
   for (int j = 30; j >= 0; j--)
   {
      int sum = 0;
      for (int i = 0; i < n; i++)
         sum += a[i][j];
      total[j] = sum;
   }
   int ans = 0;
   for (int i = 30; i >= 0; i--)
   {
      int p = n - total[i];
      if ((k - p) >= 0)
      {
         ans += pow(2, i);
         k -= p;
      }
   }
   cout << ans << endl;
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Test;
   while (Test--)
      Sol();
}
