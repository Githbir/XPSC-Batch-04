#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll Tan = 1, n, m, k, c, sum, ans;
map<ll, int> mp;
void Solve()
{
   cin >> n;
   int f = 0;
   for (ll i = 1; i <= 10000; i++)
   {
      ll x = i * i * i;
      ll y = n - x;
      if (y < 1)
         break;
         
      ll z = cbrt(y);
      if (z * z * z == y)
      {
         f = 1;
         break;
      }
   }
   if (f == 1)
      cout << "YES";
   else
      cout << "NO";
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Tan;
   while (Tan--)
   {
      c = sum = ans = 0;
      Solve();
      cout << '\n';
   }
}
