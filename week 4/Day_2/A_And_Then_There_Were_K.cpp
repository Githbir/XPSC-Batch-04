#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, x;
void solve()
{
   cin >> n;
   while (n /= 2)
      x++;
   cout << (1 << x) - 1 << '\n';
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      x = 0, solve();
}
