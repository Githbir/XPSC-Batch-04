#include <bits/stdc++.h>
using namespace std;
#define int long long
#define f for (int i = 0; i < n; i++)
int t = 1, n, m, k;
void Solve()
{
   cin >> n;
   vector<int> a(n);
   f cin >> a[i], a[i]--;

   int i = 0, flag = 0;
   while (i < n && a[i] == a[n - i - 1])
      i++;

   for (auto x : {a[i], a[n - i - 1]})
   {
      auto b = a;
      b.erase(remove(b.begin(), b.end(), x), b.end());
      auto c = b;
      reverse(c.begin(), c.end());
      if (b == c)
         flag = 1;
   }
   flag == 1 ? cout << "YES\n" : cout << "NO\n";
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> t;
   while (t--)
      Solve();
}
