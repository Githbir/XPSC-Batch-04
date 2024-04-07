#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, x, y;
void solve()
{
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      cin >> x;
      y |= x;
   }
   cout << y << '\n';
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      y = 0, solve();
}
