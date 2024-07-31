#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, x, y, x1, x2, y1, y2;
   cin >> n >> x >> y >> x1 >> y1 >> x2 >> y2;
   string s = "NO\n";

   if (x1 > x && y1 > y)
   {
      if (x2 > x && y2 > y && abs(x - x2) != abs(y - y2))
         s = "YES\n";
   }
   else if (x1 < x && y1 > y)
   {
      if (x2 < x && y2 > y && abs(x - x2) != abs(y - y2))
         s = "YES\n";
   }
   else if (x1 < x && y1 < y)
   {
      if (x2 < x && y2 < y && abs(x - x2) != abs(y - y2))
         s = "YES\n";
   }
   else if (x1 > x && y1 < y)
   {
      if (x2 > x && y2 < y && abs(x - x2) != abs(y - y2))
         s = "YES\n";
   }
   cout << s;
}
