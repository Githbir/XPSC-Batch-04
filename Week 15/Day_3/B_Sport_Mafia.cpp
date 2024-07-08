#include <bits/stdc++.h>
#define int long long
using namespace std;
int Test = 1, n, m, k;
void Sol()
{
   cin >> n >> k;
   int sum = 0, x = 0;

   for (int i = 1; i <= n; i++)
   {
      sum += i;
      x = n - i;
      if (sum - x == k)
         break;
   }
   cout << x << "\n";
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   Sol();
}
