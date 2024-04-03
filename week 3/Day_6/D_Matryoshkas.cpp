#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n;
void solve()
{
   cin >> n;
   ll a[n];
   map<int, int> m;
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
      m[a[i]]++;
   }
   sort(a, a + n);
   ll ans = 0;
   for (int i = 0; i < n; i++)
   {
      int x = a[i];
      if (m[a[i]] != 0)
      {
         ans++;
         while (m[x] > 0)
            m[x]--, x++;
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
