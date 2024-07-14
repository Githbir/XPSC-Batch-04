#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, mx = 1;
   cin >> n;
   vector<int> a(n);
   for (int i = 0; i < n; i++)
      cin >> a[i];

   map<int, int> m;
   // for (int i = 0; i < n; i++)
   //    for (int k = i + 1; k < n; k++)
   //       mx = max(mx, ++m[a[i] + a[k]]);

   // // for (auto i : m)
   // //    mx = max(mx, m[i.first]);

   // cout << mx;
   for (auto i : a)
      for (auto k : a)
         mx = max(mx, ++m[i + k]);
   cout << mx / 2;
}
