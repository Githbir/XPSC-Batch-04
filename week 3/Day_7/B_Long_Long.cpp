#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   cin >> n;
   ll a[n], flag = 1, sum = 0, c = 0;

   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
      sum += abs(a[i]);
      if (a[i] < 0 && flag)
         c++, flag = 0;
      else if (a[i] > 0)
         flag = 1;
   }
   cout << sum << " " << c << '\n';
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      solve();
}
