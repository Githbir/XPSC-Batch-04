#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   cin >> n >> m;
   ll a[n];
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
      if (a[i] != m)
         cout << a[i] << " ";
   }
   cout << '\n';
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   solve();
}
