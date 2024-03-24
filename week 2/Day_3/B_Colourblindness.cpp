#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   string s1, s2;
   cin >> n >> s1 >> s2;
   int c = 0;
   for (int i = 0; i < n; i++)
   {
      if (s1[i] == s2[i])
         c++;
      else if (s1[i] == 'B' && s2[i] == 'G' || s1[i] == 'G' && s2[i] == 'B')
         c++;
   }
   if (c == n)
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
