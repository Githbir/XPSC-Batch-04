#include <bits/stdc++.h>
using namespace std;
#define nn cout << '\n';
#define ll long long int
ll Tan = 1, n, m;
void Solve()
{
   cin >> n;
   ll ans = 0;
   for (int i = 1; i <= n; i++)
      ans += i;

   ll x = ans % n;
   cout << x + 1;

   for (int i = 2; i <= n; i++)
      cout << ' ' << i;
   nn
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Tan;
   while (Tan--)
      Solve();
}
