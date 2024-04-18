#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Tan = 1, n, m;
void Solve()
{
   cin >> n;
   ll x;
   ll mn = 1023, mx = 0;
   for (int i = -1; ++i < n;)
   {
      cin >> x;
      mn &= x;
      mx |= x;
   }
   cout << mx - mn;
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
