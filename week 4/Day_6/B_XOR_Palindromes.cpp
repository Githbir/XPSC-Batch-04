#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Tan = 1, n, m;
void Solve()
{
   string s;
   cin >> n >> s;
   ll mid = (n & 1), c = 0;
   for (int i = 0; i < (n / 2); i++)
      if (s[i] != s[n - 1 - i])
         c++;

   ll i = 0;
   for (i = 0; i < c; i++)
      cout << 0;

   for (int j = 0; i <= (n - c); j++, i++)
      if (j % 2)
         cout << mid;
      else
         cout << 1;

   for (i = i; i <= n; i++)
      cout << 0;
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Tan;
   while (Tan--)
   {
      Solve();
      cout << '\n';
   }
}
