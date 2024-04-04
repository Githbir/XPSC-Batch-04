#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   cin >> n;
   vector<pair<ll, ll>> a(n), b(n), c(n);
   ll val, ans = 0, x, y, z;
   for (int i = 0; i < n; i++)
   {
      cin >> val;
      a[i].first = val;
      a[i].second = i;
   }
   for (int i = 0; i < n; i++)
   {
      cin >> val;
      b[i].first = val;
      b[i].second = i;
   }
   for (int i = 0; i < n; i++)
   {
      cin >> val;
      c[i].first = val;
      c[i].second = i;
   }
   sort(a.begin(), a.end(), greater<pair<ll, ll>>());
   sort(b.begin(), b.end(), greater<pair<ll, ll>>());
   sort(c.begin(), c.end(), greater<pair<ll, ll>>());

   for (ll i = 0; i < 3; i++)
      for (ll j = 0; j < 3; j++)
         for (ll k = 0; k < 3; k++)
         {
            x = a[i].second;
            y = b[j].second;
            z = c[k].second;
            if (x != y && x != z && y != z)
               ans = max(ans, a[i].first + b[j].first + c[k].first);
         }
   cout << ans << endl;
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      solve();
}
