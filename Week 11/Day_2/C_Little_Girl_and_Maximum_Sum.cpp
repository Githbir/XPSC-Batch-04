#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k;
const int N = 2e5 + 100;
int a[N], d[N];
void Sol()
{
   cin >> n >> k;
   for (int i = 1; i <= n; i++)
      cin >> a[i];

   sort(a + 1, a + n + 1);
   for (int i = 1; i <= k; i++)
   {
      int l, r;
      cin >> l >> r;
      d[l]++;
      d[r + 1]--;
   }
   for (int i = 1; i <= n; i++)
      d[i] += d[i - 1];

   sort(d, d + n + 1);
   int sum = 0;
   for (int i = 1; i <= n; i++)
      sum += a[i] * d[i];

   cout << sum << endl;
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   Sol();
}
