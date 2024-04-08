#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   cin >> n;
   ll a[n], c[30] = {0}, s = 0;
   for (int i = 0; i < n; i++)
      cin >> a[i];

   for (int i = 0; i < n; i++)
      c[__lg(a[i])]++;

   for (int i = 0; i < 30; ++i)
      s = s + (c[i] * (c[i] - 1) / 2);

   cout << s << '\n';
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      solve();
}
