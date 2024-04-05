#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   cin >> n;
   ll a[n];
   for (int i = 0; i < n; i++)
      cin >> a[i];

   ll x = a[0];
   for (int i = 1; i < n; i++)
      x = x ^ a[i];

   ll mn = x;
   for (int i = 0; i < n; i++)
      mn = min(mn, x ^ a[i]);

   cout << mn << endl;
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      solve();
}
