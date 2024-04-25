#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll Tan = 1, n, m, k, c, sum, ans;
void Solve()
{
   cin >> n >> k;
   ll a[n];
   for (ll i = 0; i < n; i++)
   {
      cin >> a[i];
      a[i] += i + 1;
   }
   sort(a, a + n);
   int i = 0;
   while (ans + a[i] <= k)
   {
      ans += a[i++];
      c++;
   }
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Tan;
   while (Tan--)
   {
      c = sum = ans = 0;
      Solve();
      cout << c << '\n';
   }
}
