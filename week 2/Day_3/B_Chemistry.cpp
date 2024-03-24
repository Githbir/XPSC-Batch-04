#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   string s;
   cin >> n >> m >> s;
   int c[26] = {0};
   for (int i = 0; i < n; i++)
   {
      int x = s[i] - 'a';
      c[x]++;
   }
   ll ct = -1;
   for (int i = 0; i < 26; i++)
   {
      if (c[i] % 2 == 1)
         ct++;
   }
   if (ct <= m)
      cout << "YES\n";
   else
      cout << "NO\n";
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      solve();
}
