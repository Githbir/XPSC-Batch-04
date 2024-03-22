#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   string a, b;
   int c = 0;
   cin >> a >> b;

   for (int i = 0; i < a.size(); i++)
   {
      if (a[i] != b[i])
         c++;
   }
   cout << c << '\n';
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   solve();
}
