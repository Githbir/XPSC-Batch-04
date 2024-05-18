#include <bits/stdc++.h>
using namespace std;
#define int long long
int Tan = 1, n, m, k;
void Solve()
{
   cin >> n;
   vector<int> a(n);
   for (int i = 0; i < n; i++)
      cin >> a[i];

   int k = 0, c = 0;
   set<int> s;

   for (int i = 0; i < n; i++)
   {
      while (s.count(a[i]))
         s.erase(a[k++]);
      s.insert(a[i]);
      c = max(c, (int)s.size());
   }
   cout << c << '\n';
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   Solve();
}
