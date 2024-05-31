#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k;
void Sol()
{
   cin >> n;
   int a[n];
   for (int i = 0; i < n; i++)
      cin >> a[i];

   int ans = 0;
   vector<int> visit(n + 1, 0);
   visit[a[0]] = 1;
   for (int i = 1; i < n; i++)
   {
      int c = 0;
      for (int j = 0; j < i; j++)
         if (a[j] >= a[i])
            c++;
      ans += c;
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
