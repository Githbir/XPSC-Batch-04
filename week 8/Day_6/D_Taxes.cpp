#include <bits/stdc++.h>
using namespace std;
#define int long long
int Tan = 1, n, m, k;
bool is_Prime(int n)
{
   for (int i = 2; i * i <= n; i++)
      if (n % i == 0)
         return false;
   return true;
}
int32_t main()
{
   cin >> n;
   if (is_Prime(n))
      cout << 1 << endl;
   else if ((n % 2 == 0) || (n % 2 == 1 && is_Prime(n - 2)))
      cout << 2 << endl;
   else
      cout << 3 << endl;
}