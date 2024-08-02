#include <bits/stdc++.h>
using namespace std;
#define int long long
#define f for (int i = 0; i < n; i++)
int t = 1, n, m, k;
void Solve()
{
   cin >> n;
   vector<int> a(n);
   f cin >> a[i];

   int ans = 0, c = -1;
   f
   {
      if (a[i] > ans)
      {
         c = i + 1;
         break;
      }
      else if (a[i] == ans)
         ans++;
   }
   cout << c << '\n';
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   Solve();
}
