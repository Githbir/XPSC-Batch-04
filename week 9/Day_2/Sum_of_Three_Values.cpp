#include <bits/stdc++.h>
using namespace std;
#define int long long
int Tan = 1, n, m, k;
void Solve()
{
   cin >> n >> k;
   vector<pair<int, int>> a(n);
   for (int i = 0; i < n; i++)
   {
      cin >> a[i].first;
      a[i].second = i + 1;
   }
   sort(a.begin(), a.end());
   for (int i = 0; i < n; i++)
   {
      int x = k - a[i].first;
      for (int j = i + 1, iii = n - 1; j < iii; j++)
      {
         while (a[j].first + a[iii].first > x)
            iii--;
         if (j < iii && a[j].first + a[iii].first == x)
         {
            cout << a[i].second << " " << a[j].second << " " << a[iii].second;
            return;
         }
      }
   }
   cout << "IMPOSSIBLE" << '\n';
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   // cin >> Tan;
   while (Tan--)
      Solve();
}
