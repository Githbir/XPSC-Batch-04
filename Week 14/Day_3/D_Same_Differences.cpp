#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
   ll n, x, c = 0;
   cin >> n;
   map<int, ll> mp;
   for (int i = 0; i < n; i++)
   {
      cin >> x;
      x -= i;
      c += mp[x];
      mp[x]++;
   }
   cout << c << '\n';
}
int main()
{
   int t;
   cin >> t;
   while (t--)
      solve();
}