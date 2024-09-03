#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n;
void solve()
{
   cin >> n;
   string a;
   cin >> a;
   int c = 0;
   for (int i = 0; i < n - 2; i++)
   {

      if (a[i] == 'p' && a[i + 1] == 'i' && a[i + 2] == 'e')
         c++, i = i + 2;
      else if (a[i] == 'm' && a[i + 1] == 'a' && a[i + 2] == 'p')
         c++, i = i + 2;
   }
   cout << c << '\n';
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      solve();
}
