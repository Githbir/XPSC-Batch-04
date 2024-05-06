#include <bits/stdc++.h>
using namespace std;
#define N cout << "\n";
#define int long long
int Tan = 1, n, m, k;
void Solve()
{
   string s;
   while (cin >> s)
   {
      int n = s.size(), c = 0, one = 0, zero = 0;
      for (auto i : s)
         if (i == '0')
            one++;
         else
            zero++;

      for (auto i : s)
         if (i == '0' && zero > 0)
            c++, zero--;
         else if (i == '1' && one > 0)
            c++, one--;
         else
            break;
      cout << n - c;
      N
   }
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Tan;
   // while (Tan--)
   Solve();
}
