#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   ll k, val;
   cin >> n >> k >> val;
   ll a[n];
   for (int i = 0; i < n; i++)
      cin >> a[i];

   ll ans = 0, len = 0;

   for (int i = 0; i < n; i++)
      if (a[i] <= val)
      {
         len++;
         if (i == n - 1 || a[i + 1] > val)
         {
            if (len >= k)
            {
               ll N = len - k + 1;
               ll sub_array = (N * (N + 1)) / 2;
               ans += sub_array;
            }
            len = 0;
         }
      }
   cout << ans << '\n';
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      solve();
}
