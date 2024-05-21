#include <bits/stdc++.h>
using namespace std;
#define int long long
int Tan = 1, n, m, k, x;
void Solve()
{
   cin >> n >> m;
   multiset<int> s;
   for (int i = 0; i < n; i++)
   {
      cin >> x;
      s.insert(x);
   }
   for (int i = 0; i < m; i++)
   {
      cin >> k;
      auto it = s.upper_bound(k);
      if (it == s.begin())
         cout << -1;
      else
      {
         --it;
         cout << *it;
         s.erase(it);
      }
      cout << endl;
   }
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   Solve();
}
