#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   int t, n;
   cin >> t;
   while (t--)
   {
      cin >> n;
      int a[n + 1];

      for (int i = 1; i <= n; i++)cin >> a[i];

      int x = 3;
      for (int i = 1; i <= n; i++)if (a[a[i]] == i)x = 2;

      cout << x << endl;
   }
}
