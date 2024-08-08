#include <bits/stdc++.h>
using namespace std;
void solve()
{
   string s, Y = "NET\n";
   cin >> s;
   int c = 0, n = s.size();

   for (auto i : s)
      if (i == '0')
         c++;

   if (min(c, n - c) % 2)
      Y = "DA\n";

   cout << Y;
}
int main()
{
   int t;
   cin >> t;
   while (t--)
      solve();
}
