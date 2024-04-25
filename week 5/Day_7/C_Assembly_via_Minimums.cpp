#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll Tan = 1, n, m, k, c, sum, ans;
void Solve()
{
   cin >> n;
   m = (n * (n - 1)) / 2;
   ll a[n], b[m];
   for (ll i = 0; i < m; i++)
      cin >> b[i];
   sort(b, b + m);

   ll x = 1, i = 0, k = n - 1;
   while (n - x > 0)
   {
      a[i++] = b[k - 1];
      ++x;
      k += n - x;
   }
   for (int i = 0; i < n - 1; i++)
      cout << a[i] << " ";
   cout << a[i - 1];
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
