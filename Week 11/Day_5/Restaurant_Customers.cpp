#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k;
void Sol()
{
   cin >> n;
   vector<pair<int, int>> p;
   int x, y, c = 0, mx = 0;
   for (int i = 0; i < n; i++)
   {
      cin >> x >> y;
      p.push_back({x, 1});
      p.push_back({y, -1});
   }
   sort(p.begin(), p.end());
   // for (int i = 0; i < p.size(); i++)
   //    cout << p[i].first << ' ' << p[i].second << endl;
   for (int i = 0; i < p.size(); i++)
   {
      c += p[i].second;
      mx = max(mx, c);
   }
   cout << mx << '\n';
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   Sol();
}
// 2 1
// 3 1
// 4 -1
// 5 1
// 8 -1
// 9 -1
// 2