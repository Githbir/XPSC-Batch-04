#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Tan = 1, n, m, k;
void Solve()
{
   cin >> n >> m >> k;
   m = m + 1;
   vector<ll> a(m);
   for (ll i = -1; ++i < m;)
      cin >> a[i];

   vector<vector<ll>> each_player; // store each player bits
   for (ll i = 0; i < m; i++)
   {
      vector<ll> v;
      for (ll k = 0; k < n; k++)
      {
         if ((a[i] >> k) & 1)
            v.push_back(1);
         else
            v.push_back(0);
      }
      each_player.push_back(v);
   }

   ll ans = 0;
   vector<ll> fedor_bits = each_player[m - 1]; // store fedor bits

   for (ll i = 0; i < each_player.size() - 1; i++)
   {
      vector<ll> v = each_player[i];
      ll c = 0;
      for (int k = 0; k < n; k++)
      {
         if (fedor_bits[k] != v[k])
            c++;
      }
      if (c <= k)
         ans++;
   }
   cout << ans;
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   Solve();
   cout << '\n';
}
