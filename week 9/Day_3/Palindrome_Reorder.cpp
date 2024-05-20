#include <bits/stdc++.h>
using namespace std;
#define int long long
int Tan = 1, n, m, k;
void Solve()
{
   string s, a, b;
   cin >> s;
   int c[26] = {0}, f = 0, n = s.size(), p = 0;
   for (int i = 0; i < n; i++)
      c[s[i] - 65]++;
   for (int i = 0; i < 26; i++)
   {
      if (c[i] % 2)
         f++, p = i;
      c[i] = c[i] / 2;
   }
   if (f > 1)
   {
      cout << "NO SOLUTION\n";
      return;
   }
   for (int i = 0; i < 26; i++)
      for (int j = 0; j < c[i]; j++)
         a += char(i + 65);
   b = a;
   reverse(b.begin(), b.end());
   if (n % 2)
      a += char(p + 65);
   cout << a + b << '\n';
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   Solve();
}
