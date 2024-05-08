#include <bits/stdc++.h>
using namespace std;
#define N cout << "\n";
#define int long long
int Tan = 1, n, m, k;
void Solve()
{
   string s;
   cin >> n >> s;
   int ans = INT_MAX;
   for (int i = 'a'; i <= 'z'; i++)
   {
      int sum = 0, r = n - 1, l = 0;
      while (l <= r)
         if (s[l] != s[r])
         {
            if (s[r] == i)
               r--, sum++;
            else if (s[l] == i)
               l++, sum++;
            else
            {
               sum = INT_MAX;
               break;
            }
         }
         else
            r--, l++;
      ans = min(ans, sum);
   }
   if (ans == INT_MAX)
      cout << -1;
   else
      cout << ans;
   N
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Tan;
   while (Tan--)
      Solve();
}
