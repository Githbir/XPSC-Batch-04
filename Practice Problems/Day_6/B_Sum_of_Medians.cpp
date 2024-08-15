#include <bits/stdc++.h>
using namespace std;
#define int long long
#define f for (int i = 0; i < n; i++)
int t = 1, n, m, k, x;
void Solve()
{
   cin >> n >> k;
   vector<int> a((n * k) + 1);
   for (int i = 1; i <= n * k; i++)
      cin >> a[i];
   // sort(a.rbegin(), a.rend());

   int x = ceil(n / 2.0), s = 0;

   for (int i = k * (x - 1) + 1; i <= n * k; i += n - x + 1)
      s += a[i];

   cout << s << '\n';
}

int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> t;
   while (t--)
      Solve();
}
