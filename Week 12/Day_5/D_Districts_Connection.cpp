#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k;
void Sol()
{
   cin >> n;
   map<int, vector<int>> mp;
   int a[n + 1];
   for (int i = 1; i <= n; i++)
   {
      cin >> a[i];
      mp[a[i]].push_back(i);
   }
   if (mp.size() == 1)
      cout << "NO" << '\n';
   else
   {
      cout << "YES" << '\n';
      int x = a[1];
      int y;
      for (int i = 2; i <= n; i++)
         if (a[i] != x)
         {
            cout << 1 << " " << i << '\n';
            y = i;
         }
      for (int i = 2; i <= n; i++)
         if (a[i] == x)
            cout << y << " " << i << '\n';
   }
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Test;
   while (Test--)
      Sol();
}
