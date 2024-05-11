#include <bits/stdc++.h>
using namespace std;
#define int long long
int Tan = 1, n, m, k;
void Solve()
{
   cin >> n;
   cout << n / 2 << endl;
   if (n % 2 == 0)
   {
      for (int i = 0; i < n / 2; i++)
         cout << 2 << ' ';
   }
   else
   {
      for (int i = 1; i < n / 2; i++)
         cout << 2 << ' ';
      cout << 3 << endl;
   }
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   // cin >> Tan;
   // while (Tan--)
   Solve();
}
