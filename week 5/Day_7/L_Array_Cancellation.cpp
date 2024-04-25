#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll Tan = 1, n, m, k, c, sum, ans;
void Solve()
{
   cin >> n;
   ll a[n];
   for (int i = 0; i < n; i++)
      cin >> a[i];

   for (int i = 0; i < n; i++)
      sum = max(ans, sum + a[i]);
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Tan;
   while (Tan--)
   {
      c = sum = ans = 0;
      Solve();
      cout << sum << '\n';
   }
}
