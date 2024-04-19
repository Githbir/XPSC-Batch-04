#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Tan = 1, n, m;
void Solve()
{
   ll a, b, c;
   cin >> a >> b >> c;

   ll x = a - 1, y;
   if (b >= c)
      y = b - 1;
   else
      y = c - b, y = y + c - 1;
      
   if (x < y || a == 1)
      cout << 1;
   else if (x > y)
      cout << 2;
   else
      cout << 3;
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Tan;
   while (Tan--)
   {
      Solve();
      cout << '\n';
   }
}
