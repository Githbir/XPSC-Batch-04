#include <bits/stdc++.h>
#define int long long int
using namespace std;
int n, t;
void solve()
{
   cin >> n;
   map<int, int> mp;
   int a[n];
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
      mp[a[i]]++;
   }
   int ans = 0;
   for (int i = 0; i < n; i++)
   {
      mp[a[i]]--;
      if (a[i] == 1 || a[i] == 2)
         ans += mp[1] + mp[2];
      else
         ans += mp[a[i]];
   }
   cout << ans << endl;
}
int32_t main()
{
   cin >> t;
   while (t--)
      solve();
}
