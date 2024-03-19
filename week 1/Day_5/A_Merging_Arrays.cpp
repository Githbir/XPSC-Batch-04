#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   cin >> n >> m;
   ll a[n], b[m];
   for (int i = 0; i < n; i++)
      cin >> a[i];
   for (int i = 0; i < m; i++)
      cin >> b[i];

   ll l = 0, r = 0;
   while (l < n && r < m)
   {
      if (a[l] <= b[r] && l < n)
      {
         cout << a[l] << " ";
         l++;
      }
      else
      {
         cout << b[r] << " ";
         r++;
      }
   }
   while (l < n)
   {
      cout << a[l] << " ";
      l++;
   }
   while (r < m)
   {
      cout << b[r] << " ";
      r++;
   }
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   solve();
}
