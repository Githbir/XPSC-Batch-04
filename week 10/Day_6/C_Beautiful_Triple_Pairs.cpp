#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k;
void Sol()
{
   cin >> n;
   map<pair<int, int>, int> ab;
   map<pair<int, int>, int> bc;
   map<pair<int, int>, int> ac;
   map<array<int, 3>, int> mp;

   long long ans = 0;
   vector<int> v(n);
   for (int i = 0; i < n; ++i)
   {
      cin >> v[i];
      if (i > 1)
      {
         int a = v[i - 2];
         int b = v[i - 1];
         int c = v[i];

         ans += ab[{a, b}];
         ab[{a, b}]++;

         ans += bc[{b, c}];
         bc[{b, c}]++;

         ans += ac[{a, c}];
         ac[{a, c}]++;

         ans -= 3 * (mp[{a, b, c}]);
         mp[{a, b, c}]++;
      }
   }
   cout << ans << '\n';
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Test;
   while (Test--)
      Sol();
}