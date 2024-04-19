#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Tan = 1, n, m;
void Solve()
{
   string s, a;
   cin >> n >> s;
   for (int i = n - 1; i >= 0; --i)
   {
      int x = s[i] - '0';
      if (x == 0)
         x = s[--i] - '0' + (s[--i] - '0') * 10;

      a += char(x + 96);
   }
   reverse(a.begin(), a.end());
   cout << a;
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
