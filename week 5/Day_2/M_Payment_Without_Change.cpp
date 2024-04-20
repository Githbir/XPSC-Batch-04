#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Tan = 1, n, m;
void Solve()
{
   ll a, b, n, s, sum = 0;
   cin >> a >> b >> n >> s;
   ll x = s / n;
   sum = min(a, x) * n;

   if (sum + b >= s)
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
      Solve();
      cout << '\n';
   }
}
