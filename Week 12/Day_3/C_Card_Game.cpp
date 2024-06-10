#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k;
void Sol()
{
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
      cin >> arr[i];
   if (n == 1)
   {
      cout << max(arr[0], (int)0) << endl;
      return;
   }
   int ans = 0;
   for (int i = 2; i < n; i++)
      if (arr[i] > 0)
         ans += arr[i];

   if (arr[0] > 0)
      if (arr[1] > 0)
         ans += arr[0] + arr[1];
      else
         ans += arr[0];
   else if (arr[0] + arr[1] > 0)
      ans += arr[0] + arr[1];

   cout << ans << endl;
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Test;
   while (Test--)
      Sol();
}