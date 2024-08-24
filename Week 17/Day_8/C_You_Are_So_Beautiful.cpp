#include <bits/stdc++.h>
using namespace std;
#define int long long
int t = 1, n, m, k, x;
void sol()
{
   int n;
   cin >> n;
   vector<int> a(n);
   for (int i = 0; i < n; i++)cin >> a[i];

   vector<bool> f(n, 0), l(n, 0);
   set<int> s,s1;

   for (int i = 0; i < n; i++)
   {
      f[i] = !s.count(a[i]);
      s.insert(a[i]);
   }
   for (int i = n - 1; i >= 0; i--)
   {
      l[i] = !s1.count(a[i]);
      s1.insert(a[i]);
   }
   
   int ans = 0, c = 0;
   for (int i = n - 1; i >= 0; i--)
   {
      c += l[i];
      ans += c * f[i];
   }
   cout << ans << "\n";
}
signed main()
{
   cin >> t;
   while (t--)
      sol();
}