#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   cin >> n;
   int c = 0, ans = 0;
   vector<int> a(n);
   map<int, int> mp;
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
      mp[a[i]]++;
      c = max(c, mp[a[i]]);
   }
   while (c < n)
   {
      int rem = min(int(n) - c, c);
      ans = ans + rem + 1;
      c = c + rem;
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
