#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k;
void Sol()
{
   cin >> n;
   int a[n], ans = 0;
   for (int i = 0; i < n; i++)
      cin >> a[i];
   sort(a, a + n);

   for (int i = 2; i <= n * 2; i++)
   {
      int l = 0, r = n - 1, c = 0;
      while (l < r)
         if (a[l] + a[r] == i)
         {
            l++;
            r--;
            c++;
         }
         else if (a[l] + a[r] > i)
            r--;
         else
            l++;
      ans = max(ans, c);
   }
   cout << ans << endl;
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Test;
   while (Test--)
      Sol();
}