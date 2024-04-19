#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Tan = 1, n, m;
void Solve()
{
   cin >> n;
   vector<ll> v(n);
   ll c = 0, mn = INT_MAX, sum = 0;
   for (int i = -1; ++i < n;)
   {
      cin >> v[i];
      if (v[i] < 0)
         c++;
      sum = sum + abs(v[i]);
      mn = min(mn, abs(v[i]));
   }
   if (c % 2)
      cout << sum - 2 * mn;
   else
      cout << sum;
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
