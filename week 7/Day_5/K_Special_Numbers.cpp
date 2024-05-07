#include <bits/stdc++.h>
using namespace std;
#define N cout << "\n";
#define int long long
int Tan = 1, n, m, k;
int MOD = 1e9 + 7;
void Solve()
{
   int ans = 0;
   cin >> n >> k;
   vector<int> v(50, 0);
   v[0] = 1LL;
   for (int i = 1; i <= 40; i++)
   {
      v[i] = v[i - 1] * n;
      v[i] %= MOD;
   }
   for (int i = 0; i < 35; i++)
   {
      if (k & 1LL)
         ans += v[i];
      k >>= 1LL;
      ans %= MOD;
   }
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
