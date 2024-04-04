#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   string s1, s2;
   cin >> s1 >> s2;

   sort(s1.begin(), s1.end());
   sort(s2.begin(), s2.end());

   ll x, y;
   if (s1 == "M")
      x = 0;
   else if (s1[0] == 'S')
      x = s1.size(), x = x * -1;
   else if (s1[0] == 'L')
      x = s1.size();


   if (s2 == "M")
      y = 0;
   else if (s2[0] == 'S')
      y = s2.size(), y = y * -1;
   else if (s2[0] == 'L')
      y = s2.size();


   if (x < y)
      cout << "<\n";
   else if (x > y)
      cout << ">\n";
   else
      cout << "=\n";
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      solve();
}
