#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Tan = 1, n;
void Solve()
{
   cin >> n;
   vector<ll> v(n);
   for (int i = -1; ++i < n;)
      cin >> v[i];

   ll x = v[0];
   for (int i = -1; ++i < n;)
      x &= v[i];

   cout << x;
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
