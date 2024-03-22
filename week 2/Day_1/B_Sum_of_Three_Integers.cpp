#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   ll c = 0;
   cin >> n >> m;

   for (int i = 0; i <= n; i++)
   {
      for (int j = 0; j <= n; j++)
      {
         int k = m - i - j;
         if (k >= 0 && k <= n)
            c++;
      }
   }
   cout << c << '\n';
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   solve();
}
