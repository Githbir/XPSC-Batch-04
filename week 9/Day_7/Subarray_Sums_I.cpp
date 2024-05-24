#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k;
void TANBIR()
{
   cin >> n >> k;
   map<int, int> m;
   int sum = 0, c = 0, x;
   m[sum] = 1;
   for (int i = 0; i < n; i++)
   {
      cin >> x;
      sum += x;
      if (m[sum - k])
         c++;
      m[sum] = 1;
   }
   cout << c << '\n';
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   // cin >> Test;
   while (Test--)
      TANBIR();
}
