#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k, x, y;
void Sol()
{
   cin >> n;
   vector<vector<int>> a(n);
   set<int> st;
   for (int i = 0; i < n; i++)
   {
      cin >> x;
      for (int j = 0; j < x; j++)
      {
         cin >> y;
         a[i].push_back(y);
         st.insert(y);
      }
   }
   int ans = 0;
   for (auto it : st)
   {
      set<int> ss;
      for (auto u : a)
      {
         bool f = true;
         for (auto v : u)
            if (v == it)
               f = false;
         if (f)
            for (auto w : u)
               ss.insert(w);
      }
      ans = max(ans, (int)ss.size());
   }
   cout << ans << '\n';
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Test;
   while (Test--)
      Sol();
}
