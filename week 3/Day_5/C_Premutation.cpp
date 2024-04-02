#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   cin >> n;
   m = n - 1;
   ll a[n + 1][m + 1];
   for (int i = 1; i <= n; i++)
      for (int j = 1; j <= m; j++)
         cin >> a[i][j];

   int x, fre[n + 1] = {0};
   int val;
   for (int i = 1; i <= n; i++)
      fre[a[i][m]]++;

   for (int i = 1; i <= n; i++)
   {
      if (fre[a[i][m]] == 1)
         x = i;
      else
         val = a[i][m];
   }
   for (int i = 1; i <= m; i++)
      cout << a[x][i] << " ";

   cout << val << '\n';
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      solve();
}
