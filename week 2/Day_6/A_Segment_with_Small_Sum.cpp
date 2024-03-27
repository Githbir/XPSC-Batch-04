#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   ll sum = 0, s;
   cin >> n >> s;
   ll a[n];
   for (int i = 0; i < n; i++)
      cin >> a[i];

   int l = 0, r = 0, ans = 0;
   while (r < n)
   {
      sum += a[r];
      if (sum <= s)
         ans = max(ans, r - l + 1);
      else
         sum -= a[l], l++;
      r++;
   }
   cout << ans << '\n';
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   solve();
}
