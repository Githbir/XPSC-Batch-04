#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   ll sum = 0, c = 0, flg = 0;
   cin >> n;
   ll a[n], b[m];
   for (int i = 0; i < n; i++)
      cin >> a[i];
   for (int i = 0; i < n; i++)
   {
      for (int j = i + 1; j < n; j++)
         if (a[j] == a[i])
         {
            c++;
            break;
         }
   }
   if (c % 2 == 1)
      c = c + 1;
   cout << n - c << '\n';
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      solve();
}
