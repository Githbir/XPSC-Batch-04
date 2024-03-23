#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m, x;
void solve()
{
   string s;
   cin >> n;
   int a[n];
   for (int i = 0; i < n; i++)
      cin >> a[i];

   for (int i = 0; i < n; i++)
   {
      cin >> x >> s;
      for (int j = 0; j < x; j++)
      {
         if (s[j] == 'D')
         {
            a[i]++;
            if (a[i] > 9) a[i] = 0;
         }
         else if (s[j] == 'U')
         {
            a[i]--;
            if (a[i] < 0) a[i] = 9;
         }
      }
   }
   for (int i = 0; i < n; i++)
      cout << a[i] << " ";
   cout << endl;
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      solve();
}
