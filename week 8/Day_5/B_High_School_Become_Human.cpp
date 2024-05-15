#include <bits/stdc++.h>
using namespace std;
#define int long long
int Tan = 1, n, m, k;
void Solve()
{
   cin >> n >> m;
   double a = m * log(n);
   double b = n * log(m);

   if (a > b)
      cout << ">";
   else if (b > a)
      cout << "<";
   else
      cout << "=";
   cout << '\n';
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   // cin >> Tan;
   // while (Tan--)
   Solve();
}
