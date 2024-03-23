#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   cin >> n >> m;
   string s[n];
   for (int i = 0; i < n; i++)
      cin >> s[i];
   // for (int i = 0; i < n; i++)
   //   cout << s[i] << " ";

   int mx = INT_MAX;
   for (int i = 0; i < n - 1; i++)
      for (int j = i + 1; j < n; j++)
      {
         int sum = 0;
         for (int k = 0; k < m; k++)
         {
            // cout << s[i][k] << " " << s[j][k] << " ";
            int x = abs(s[i][k] - s[j][k]);
            sum = sum + x;
         }
         mx = min(mx, sum);
      }
   cout << mx << '\n';
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      solve();
}
