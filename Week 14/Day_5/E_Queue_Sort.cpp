#include <bits/stdc++.h>
using namespace std;
#define int long long int
int t = 1, n, m;
void solve()
{
   cin >> n;
   int a[n], mn = INT_MAX;
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
      mn = min(mn, a[i]);
   }
   vector<int> v;
   int swich = 0, ans;
   for (int i = 0; i < n; i++)
   {
      if (a[i] == mn)
      {
         if (swich == 0)
            ans = i;
         swich = 1;
      }
      if (swich)
         v.push_back(a[i]);
   }
   if (!is_sorted(v.begin(), v.end()))
      cout << -1 << endl;
   else
      cout << ans << endl;
}
int32_t main()
{
   cin >> t;
   while (t--)
      solve();
}
