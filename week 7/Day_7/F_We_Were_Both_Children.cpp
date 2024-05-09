#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10;
vector<int> divisors[N];
void Solve()
{
   int t, n;
   cin >> t;
   while (t--)
   {
      cin >> n;
      int a[n];
      map<int, int> m;
      int ans = 0;
      for (int i = 0; i < n; i++)
      {
         cin >> a[i];
         m[a[i]]++;
      }
      int mx = 0;
      for (int i = 1; i <= n; ++i)
      {
         int c = 0;
         for (auto &&j : divisors[i])
            if (m.find(j) != m.end())
               c += m[j];
         if (c > mx)
            ans = mx = c;
      }
      cout << ans << endl;
   }
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   for (int i = 1; i < N; i++)
      for (int j = i; j < N; j += i)
         divisors[j].push_back(i);
   Solve();
}