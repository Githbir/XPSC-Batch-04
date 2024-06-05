#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k;
void Sol()
{
   string s;
   cin >> n >> s;
   s = " " + s;
   vector<int> visited(n + 1, 0);
   for (int i = 1; i <= n; i++)
      if (s[i] == '1')
         visited[i] = 2;

   int ans = 0;
   for (int i = 1; i <= n; i++)
      for (int j = i; j <= n; j += i)
         if (visited[j] == 0)
         {
            visited[j] = 1;
            ans += i;
         }
         else if (visited[j] == 2)
            break;
   cout << ans << '\n';
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Test;
   while (Test--)
      Sol();
}
