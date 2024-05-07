#include <bits/stdc++.h>
using namespace std;
#define N cout << "\n";
#define int long long
int Tan = 1, n, m, k;
void Solve()
{
   string s, q;
   cin >> s;
   int b = 0, B = 0;
   int sz = s.size();
   for (int i = s.size() - 1; i >= 0; i--)
   {
      if (s[i] == 'b')
         b++;
      else if (s[i] == 'B')
         B++;
      else
      {
         if (s[i] >= 'a' && s[i] <= 'z' && b > 0)
            b--;
         else if (s[i] >= 'A' && s[i] <= 'Z' && B > 0)
            B--;
         else
            q.push_back(s[i]);
      }
   }
   reverse(q.begin(), q.end());
   cout << q;
   N
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Tan;
   while (Tan--)
      Solve();
}
