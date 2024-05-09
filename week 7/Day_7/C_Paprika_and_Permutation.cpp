#include <bits/stdc++.h>
using namespace std;
#define N cout << "\n";
#define int long long
int Tan = 1, n, m, k;
void Solve()
{
   cin >> n;
   multiset<int> se;
   int x, ans = 0;
   for (int i = 1; i <= n; i++)
   {
      cin >> x;
      se.insert(x);
   }
   for (int i = n; i >= 1; i--)
      if (se.find(i) != se.end())
         se.erase(se.find(i));
      else
      {
         auto it = se.lower_bound(i * 2 + 1);
         if (it == se.end())
         {
            ans = -1;
            break;
         }
         ++ans;
         se.erase(it);
      }
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
