#include <bits/stdc++.h>
using namespace std;
#define int long long
int t = 1, n, x;
void solve()
{
   cin >> n;
   map<int, int> m;
   vector<int> v;
   string s = "NO\n";

   for (int i = 0; i < n; ++i)
   {
      cin >> x;
      int r = x % 10;
      if (m[r] < 3)
         v.push_back(r);
      m[r]++;
   }
   for (int i = 0; i < v.size(); ++i)
      for (int j = 0; j < v.size(); ++j)
         for (int k = 0; k < v.size(); ++k)
            if (i < j && j < k && (v[i] + v[j] + v[k]) % 10 == 3)
               s = "YES\n";
   cout << s;
}
int32_t main()
{
   cin >> t;
   while (t--)
      solve();
}