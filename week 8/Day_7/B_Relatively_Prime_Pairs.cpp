#include <bits/stdc++.h>
using namespace std;
#define int long long
int Tan = 1, n, l, r;
void Solve()
{
   cin >> l >> r;
   cout << "YES" << '\n';
   for (int i = l; i <= r; i += 2)
      cout << i << " " << 1 + i << '\n';
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   Solve();
}
