#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, x, k;
void TANBIR()
{
   cin >> n >> m;
   vector<int> v(n);
   for (int i = 0; i < n; i++)
      cin >> v[i];
   sort(v.begin(), v.end());
   while (m--)
   {
      cin >> x;
      auto i = upper_bound(v.begin(), v.end(), x) - v.begin();
      cout << i << " ";
   }
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   TANBIR();
}
