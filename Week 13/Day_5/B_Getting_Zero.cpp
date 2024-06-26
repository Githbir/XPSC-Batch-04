#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, x;
void Sol()
{
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      cin >> x;
      int last = INT_MAX, r = 32768;
      for (int j = 0; j <= 15; j++)
      {

         int ans = 0;
         int k = x + j;
         while (k)
         {
            k = (k * 2) % r;
            ans++;
         }
         last = min(last, ans + j);
      }
      cout << min(last, r - x) << ' ';
   }
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   Sol();
}
