#include <bits/stdc++.h>
using namespace std;
#define int long long
int t = 1;
void solve()
{
   int n, m, k;
   cin >> n >> m >> k;
   string s;
   cin >> s;

   int curr = m - 1, bad = 0, fail = 0;
   for (auto i = 0; i < s.size(); i++)
   {
      if (s[i] == 'L')
         curr = m;
      else if (s[i] == 'W')
      {
         if (curr <= 0)
            bad++;
      }
      else
      {
         if (curr <= 0)
            fail++;
      }
      curr--;
   }
   if (bad > k)
      fail++;
   cout << (fail != 0 ? "NO" : "YES") << endl;
}
int32_t main()
{
   cin >> t;
   while (t--)
      solve();
}
