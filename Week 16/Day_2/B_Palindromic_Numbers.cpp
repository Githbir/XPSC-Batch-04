#include <bits/stdc++.h>
using namespace std;
int n;
void Sol()
{
   string num, s, b;
   cin >> n >> num;

   if (num[0] != '9')
      s = string(n, '9');
   else
      s = string(n + 1, '1');
   reverse(num.begin(), num.end());

   int v = 0;
   for (int i = 0; i < n; i++)
   {
      int t = s[i] - num[i] - v;
      if (t < 0)
         t += 10, v = 1;
      else
         v = 0;
      b += to_string(t);
   }
   reverse(b.begin(), b.end());
   cout << b << "\n";
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   int Test;
   cin >> Test;
   while (Test--)
      Sol();
}
