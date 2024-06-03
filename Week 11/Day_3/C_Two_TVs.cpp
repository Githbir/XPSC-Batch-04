#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, l, r, sum = 0;
   cin >> n;
   map<int, int> m;
   for (int i = 0; i < n; i++)
   {
      cin >> l >> r;
      m[l]++;
      m[r + 1]--;
   }
   for (auto [i, val] : m)
   {
      sum += val;
      if (sum > 2)
      {
         cout << "NO\n";
         return 0;
      }
   }
   cout << "YES\n";
}