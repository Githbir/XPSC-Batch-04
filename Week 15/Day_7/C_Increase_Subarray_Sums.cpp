#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int t, n, m;
   cin >> t;
   while (t--)
   {
      cin >> n >> m;
      ll a[n];
      for (ll i = 0; i < n; i++)
         cin >> a[i];

      ll sum[n + 1];
      sum[0] = 0;

      for (ll i = 1; i < n + 1; i++)
         sum[i] = INT_MIN;

      for (ll i = 0; i < n; i++)
      {
         ll s = 0;
         for (ll j = i; j < n; j++)
         {
            s += a[j];
            sum[j - i + 1] = max(sum[j - i + 1], s);
         }
      }
      for (ll i = n - 1; i >= 0; i--)
         sum[i] = max(sum[i], sum[i + 1]);

      for (ll i = 0; i <= n; i++)
         sum[i] += (m * i);

      for (ll i = 1; i <= n; i++)
         sum[i] = max(sum[i - 1], sum[i]);

      for (ll i = 0; i <= n; i++)
         cout << sum[i] << " ";
         
      cout << '\n';
   }
}