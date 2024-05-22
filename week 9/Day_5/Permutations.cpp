#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k;
void TANBIR()
{
   cin >> n;
   vector<int> v;
   if (n == 2 || n == 3)
   {
      cout << "NO SOLUTION" << '\n';
      return;
   }
   for (int i = 2; i <= n; i += 2)
      v.push_back(i);
   for (int i = 1; i <= n; i += 2)
      v.push_back(i);

   for (int i = 0; i < n; i++)
      cout << v[i] << ' ';
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   // cin >> Test;
   while (Test--)
      TANBIR();
}
