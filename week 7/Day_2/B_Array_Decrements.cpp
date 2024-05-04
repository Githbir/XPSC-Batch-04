#include <bits/stdc++.h>
using namespace std;
#define nn cout << '\n';
#define ll long long int
ll Tan = 1, n, m;
void Solve()
{
   cin >> n;
   vector<ll> a(n), b(n);
   for (int i = 0; i < n; i++)
      cin >> a[i];
   for (int i = 0; i < n; i++)
      cin >> b[i];

   ll ans = 0;
   for (int i = 0; i < n; i++)
      ans = max(ans, a[i] - b[i]);

   for (int i = 0; i < n; i++)
      a[i] = max(0LL, a[i] - ans);

   if (a == b)
      cout << "YES";
   else
      cout << "NO";
   nn
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Tan;
   while (Tan--)
      Solve();
}
