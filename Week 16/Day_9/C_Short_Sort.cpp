#include <bits/stdc++.h>
using namespace std;
#define int long long
#define f for (int i = 0; i < n; i++)
int t = 1, n, m, k;
void Solve()
{
   string s, a = "abc";
   cin >> s;
   int c = 0;
   
   for (int i = 0; i < 3; i++)
      if (s[i] != a[i])
         c++;

   c < 3 ? cout << "YES\n" : cout << "NO\n";
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> t;
   while (t--)
      Solve();
}
