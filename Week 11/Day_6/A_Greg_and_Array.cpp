#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 9;
int l[N], r[N], d[N];
int diff[N], a[N], x[N];
int Test = 1, n, m, k;
void Sol()
{
   cin >> n >> m >> k;
   for (int i = 1; i <= n; ++i)
      cin >> a[i];

   for (int i = 1; i <= m; ++i)
      cin >> l[i] >> r[i] >> d[i];

   for (int i = 1; i <= k; ++i)
   {
      int l, r;
      cin >> l >> r;
      x[l]++;
      x[r + 1]--;
   }
   for (int i = 1; i <= m; ++i)
      x[i] += x[i - 1];

   for (int i = 1; i <= n; ++i)
      diff[i] = a[i] - a[i - 1];

   for (int i = 1; i <= m; ++i)
   {
      diff[l[i]] += 1ll * d[i] * x[i];
      diff[r[i] + 1] -= 1ll * d[i] * x[i];
   }
   for (int i = 1; i <= n; ++i)
      a[i] = a[i - 1] + diff[i];

   for (int i = 1; i <= n; ++i)
      cout << a[i] << ' ';
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   Sol();
}
