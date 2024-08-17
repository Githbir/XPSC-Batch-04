#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t, n, c, s;
   cin >> t;
   while (t--)
   {
      string a;
      cin >> n >> a;
      for (int i = 0; i < a.size(); i++)
         if (a[i] == 'B')
         {
            c = i;
            break;
         }

      for (int i = a.size() - 1; i >= 0; i--)
         if (a[i] == 'B')
         {
            s = i + 1;
            break;
         }
      cout << s - c << endl;
   }
}