#include <bits/stdc++.h>
using namespace std;
#define int long long
int Tan = 1, n, m, k;
void Solve()
{
   cin >> n >> k;
   vector<int> a;
   for (int i = 1; i <= sqrt(n); i++)
      if (n % i == 0)
      {
         a.push_back(i);
         if (i != n / i)
            a.push_back(n / i);
      }
   sort(a.begin(), a.end());
   if (a.size() < k)
      cout << -1;
   else
      cout << a[k - 1];
   cout << '\n';
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   // cin >> Tan;
   // while (Tan--)
   Solve();
}
