#include <bits/stdc++.h>
using namespace std;
#define nn cout << '\n';
#define ll long long int
ll Tan = 1, n, m;
void Solve()
{
   cin >> n;
   ll a[n];
   for (int i = 0; i < n; i++)
      cin >> a[i];
   ll mn = INT_MAX;

   for (int i = 1; i < n - 1; i++)
      mn = min(mn, max(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1])));
   mn = min(mn, abs(a[0] - a[1]));
   mn = min(mn, abs(a[n - 2] - a[n - 1]));
   cout << mn;
   nn
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Tan;
   while (Tan--)
      Solve();
}
