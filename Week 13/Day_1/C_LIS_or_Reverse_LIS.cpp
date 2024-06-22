#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k;
void Sol()
{
   cin >> n;
   int a[n];
   map<int, int> mp;
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
      mp[a[i]]++;
   }
   int x = 0, c = 0;
   for (auto p : mp)
   {
      if (p.second > 1)
         c++;
      if (p.second == 1)
         x++;
   }
   c += (x + 1) / 2;
   cout << c << endl;
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Test;
   while (Test--)
      Sol();
}
