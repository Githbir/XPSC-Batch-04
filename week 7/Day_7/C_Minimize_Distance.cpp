#include <bits/stdc++.h>
using namespace std;
#define N cout << "\n";
#define int long long
int Tan = 1, n, m, k;
void Solve()
{
   cin >> n >> k;
   vector<int> a, b;
   int x, ans = 0;
   for (int i = 1; i <= n; i++)
   {
      cin >> x;
      if (x > 0)
         a.push_back(x);
      else if (x < 0)
         b.push_back(-x);
   }
   sort(a.rbegin(), a.rend());
   sort(b.rbegin(), b.rend());

   for (int i = 0; i < a.size(); i += k)
      ans += 2 * a[i];

   for (int i = 0; i < b.size(); i += k)
      ans += 2 * b[i];

   ans -= max((!a.empty() ? a[0] : 0), (!b.empty() ? b[0] : 0));
   cout << ans;
   N
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Tan;
   while (Tan--)
      Solve();
}

