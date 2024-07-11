#include <bits/stdc++.h>
using namespace std;
void sol_Odd(int n)
{
   int a = 3, x = 0;
   for (int i = 0; i < n - 1; i++)
   {
      cout << a << ' ';
      x ^= a;
      a += 2;
   }
   cout << x << '\n';
}
void sol_Even(int n)
{
   int a = 3, x = 0;
   for (int i = 0; i < n - 2; i++)
   {
      cout << a << ' ';
      x ^= a;
      a += 2;
   }
   int p = x ^ (1 << __lg(x));
   int q = 1 << __lg(x);
   cout << p << ' ' << q << '\n';
}
int main()
{
   ios_base ::sync_with_stdio(0), cin.tie(0);
   int t, n;
   cin >> t;
   while (cin >> n)
      if (n & 1)
         sol_Odd(n);
      else
         sol_Even(n);
}
