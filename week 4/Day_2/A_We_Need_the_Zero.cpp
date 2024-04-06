#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   cin >> n;
   vector<ll> a(n);
   ll x = 0;
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
      x ^= a[i];
   }
   if (n % 2 == 0)
      if (x == 0)
         cout << x << endl;
      else
         cout << -1 << endl;
   else
      cout << x << endl;
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      solve();
}
