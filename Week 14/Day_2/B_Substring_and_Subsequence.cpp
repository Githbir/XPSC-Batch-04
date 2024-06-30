#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k;
void Sol()
{
   string a, b;
   cin >> a >> b;
   int mx = 0;
   for (int j = 0; j < b.size(); j++)
   {
      int l = j, p = 0;
      for (int i = 0; i < a.size(); i++)
      {
         if (a[i] == b[l])
            l++, p++;
         mx = max(mx, p);
      }
   }
   cout << a.size() + b.size() - mx << endl;
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Test;
   while (Test--)
      Sol();
}
