#include <bits/stdc++.h>
using namespace std;
int t, tt = 0;
#define T cin >> t;
#define w T for (; tt < t; tt++)
#define fs cout << fixed << setprecision(4);
#define ll long long int
void solve()
{
   int n;
   cin >> n;
   string a;
   cin >> a;
   int c = 0, x = 0;
   for (int i = 0; i < n; i++)
   {
      if (a[i] == '.')
         continue;
      else if (a[i] == '@')
      {
         c++;
         x = max(x, c);
      }
      else if (a[i + 1] == '@')
      {
         c++, i++;
         x = max(x, c);
      }
      else if (a[i] == '*' && a[i + 1] == '*')
         break;
   }
   cout << c << endl;
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   w solve();
}
//