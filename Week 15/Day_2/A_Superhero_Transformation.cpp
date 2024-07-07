#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, cnt;
void Sol()
{
   string a, b, x = "", y = "", x1 = "", y1 = "", c = "No\n";
   cin >> a >> b;

   if (a.size() == b.size())
   {
      for (int i = 0; i < a.size(); i++)
      {
         if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
         {
            x += a[i];
            if (b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u')
               y += b[i];
         }
         if (b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u')
         {
            x1 += b[i];
            if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
               y1 += a[i];
         }
      }
      if (x.size() == y.size() && x1.size() == y1.size())
         c = "Yes\n";
   }
   cout << c;
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   Sol();
}
