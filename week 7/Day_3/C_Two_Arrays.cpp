#include <bits/stdc++.h>
using namespace std;
#define N cout << "\n";
#define int long long
int Tan = 1, n, m, k, ans, sum, c = 0;
string s, ss;
void Solve()
{
   cin >> n;
   int a[n], b[n];
   for (int i = 0; i < n; i++)
      cin >> a[i];
   for (int i = 0; i < n; i++)
      cin >> b[i];
   sort(a, a + n);
   sort(b, b + n);

   bool f = true;
   for (int i = 0; i < n; i++)
      if (a[i] == b[i])
         continue;
      else if (a[i] + 1 != b[i])
         f = false;

   if (f)
      cout << "YES";
   else
      cout << "NO";
   N
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Tan;
   while (Tan--)
      Solve();
}
