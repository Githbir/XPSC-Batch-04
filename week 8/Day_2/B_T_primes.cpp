#include <bits/stdc++.h>
using namespace std;
#define int long long
int Tan = 1, n, m, k;
bool is_prime(int n)
{
   if (n == 1)
      return false;
   if (n == 2 || n == 3)
      return true;
   if (n % 2 == 0 || n % 3 == 0)
      return false;
   for (int i = 5; i * i <= n; i += 6)
   {
      if (n % i == 0 || n % (i + 2) == 0)
         return false;
   }
   return true;
}
bool prime(int n)
{
   int x = sqrt(n);
   return is_prime(x) && x * x == n;
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> n;
   vector<int> a(n);
   for (int i = 0; i < n; ++i)
      cin >> a[i];

   for (int i = 0; i < n; ++i)
      if (prime(a[i]))
         cout << "YES\n";
      else
         cout << "NO\n";
}
