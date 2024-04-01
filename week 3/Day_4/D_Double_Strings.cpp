#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   cin >> n;
   vector<string> a(n);
   set<string> s;
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
      s.insert(a[i]);
   }
   string ans(n, '0');
   for (int i = 0; i < n; i++)
   {
      ll k = a[i].size() - 1;
      while (k > 0)
      {
         string s1, s2;
         for (ll m = 0; m <= k - 1; m++)
            s1 += a[i][m];
         for (ll m = k; m <= a[i].size() - 1; m++)
            s2 += a[i][m];
         if (s.find(s1) != s.end() && s.find(s2) != s.end())
         {
            ans[i] += 1;
            break;
         }
         k--;
      }
   }
   cout << ans << '\n';
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      solve();
}
