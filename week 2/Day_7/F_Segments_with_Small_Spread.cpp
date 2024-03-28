#include <bits/stdc++.h>
using namespace std;
#define long long long
long t, n, k;
void solve()
{
   cin >> n >> k;
   long a[n];
   for (int i = 0; i < n; i++)
      cin >> a[i];

   long l = 0, r = 0, ans = 0, mn, mx;
   multiset<long> ml;
   while (r < n)
   {
      ml.insert(a[r]);
      mn = *ml.begin(), mx = *ml.rbegin();
      if ((mx - mn) <= k)
         ans += r - l + 1;
      else
      {
         while (l < r)
         {
            mn = *ml.begin(), mx = *ml.rbegin();
            if ((mx - mn) <= k)
               break;
            auto it = ml.find(a[l]);
            ml.erase(it);
            l++;
         }
         mn = *ml.begin(), mx = *ml.rbegin();
         if ((mx - mn) <= k)
            ans += r - l + 1;
      }
      r++;
   }
   cout << ans << '\n';
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   solve();
}
