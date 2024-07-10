#include <bits/stdc++.h>
using namespace std;
void sol()
{
   string s1, s2, YES = "YES\n";
   cin >> s1 >> s2;
   int sz1 = s1.size();
   int sz2 = s2.size();

   if (s1 == s2)
   {
      cout << YES << s1 << endl;
      return;
   }
   if (s1[0] == s2[0])
   {
      cout << YES << s2[0] << "*\n";
      return;
   }
   if (s1[sz1 - 1] == s2[sz2 - 1])
   {
      cout << YES << "*" << s2[sz2 - 1] << endl;
      return;
   }
   int p;
   for (int i = 0; i < sz1 - 1; i++)
   {
      p = s2.find(s1.substr(i, 2));
      if (p >= 0)
      {
         cout << YES << "*" << s2.substr(p, 2) << "*\n";
         return;
      }
   }
   cout << "NO\n";
}
int main()
{
   int t;
   cin >> t;
   while (t--)
      sol();
}
