#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   string s;
   cin >> n >> s;
   ll a[n] = {0};
   ll sum = 0, k = 0;
   for (int i = 0; i < n; i++)
   {
      ll L = i;
      ll R = n - i - 1;
      if (s[i] == 'L')
      {
         if (R > L)
            sum += R, a[k++] = R - L;
         else
            sum += L;
      }
      else
      {
         if (L > R)
            sum += L, a[k++] = L - R;
         else
            sum += R;
      }
   }
   sort(a, a + n);
   ll prefixsum[n];
   prefixsum[0] = a[0];

   for (int i = 1; i < n - 1; i++)
      prefixsum[i] = prefixsum[i - 1] + a[i];

   for (int i = n - 2; i >= 0; i--)
      cout << sum - prefixsum[i] << " ";
   cout << sum << '\n';
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      solve();
}