#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, k;
void solve()
{
   cin >> n >> k;
   ll a[n], c = 0, x;
   for (int i = 0; i < n; i++)
      cin >> a[i];

   for (int i = 0; i <= n - k; i++)
      for (int j = 0; j < k; j++)
         if (a[i + j] % 2)
         {
            c++;
            break;
         }
   cout << c << '\n';
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      solve();
}
