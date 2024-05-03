#include <bits/stdc++.h>
using namespace std;
#define nn cout << '\n';
#define ll long long int
ll Tan = 1, n, m;
void Solve()
{
   cin >> n;
   string a = "aa", b = "bb", ans;
   for (int i = 0; i < n / 2; i++)
      if (i % 2 == 0)
         ans += a;
      else
         ans += b;
   if (n % 2 == 0)
      cout << ans;
   else
   {
      cout << ans;
      if (ans[ans.size() - 1] == 'a')
         cout << "b";
      else
         cout << "a";
   }
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   Solve();
}
