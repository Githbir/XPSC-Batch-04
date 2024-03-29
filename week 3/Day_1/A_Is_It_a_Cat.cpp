#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m, k;
void solve()
{
   string a, b = "meow";
   cin >> n >> a;
   int j = 0, c = 0;
   char x;
   for (int i = 0; i < n; i++)
   {
      a[i] = tolower(a[i]);
      if (a[i] == b[j])
         x = b[j], j++;
      if (a[i] == x)
         c++;
   }
   if (j == 4 && a[0] == 'm' && a[n - 1] == 'w' && n == c)
      cout << "YES\n";
   else
      cout << "NO\n";
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      solve();
}
