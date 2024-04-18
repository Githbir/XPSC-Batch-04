#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Tan = 1, n, m, x;
void Solve()
{
   cin >> n >> m;
   ll ans = -1;
   for (int i = -1; ++i < n;)
   {
      cin >> x;
      if ((x & m) == m)
         ans = ans & x;
   }
   if (ans == m)
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
