#include <bits/stdc++.h>
using namespace std;
#define int long long
#define f for (int i = 0; i < n; i++)
int t = 1, n, m, k;
void Solve()
{
   cin >> n;
   int x = log2(n);
   int p = pow(2, x);

   cout << n - p << " " << p << endl;
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> t;
   while (t--)
      Solve();
}
