#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Tan = 1, n, m, x;
void Solve()
{
   cin >> n >> m;
   vector<ll> a(n);
   for (int i = -1; ++i < n;)
      cin >> a[i];
   while (m--)
   {
      cin >> x;
      int l = 0, r = n - 1, flag = 0;
      while (l <= r)
      {
         int mid = (l + r) / 2;
         if (a[mid] == x)
            flag = 1;
         if (a[mid] < x)
            l = mid + 1;
         else
            r = mid - 1;
      }
      if (flag)
         cout << "YES\n";
      else
         cout << "NO\n";
   }
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   while (Tan--)
   {
      Solve();
      cout << '\n';
   }
}