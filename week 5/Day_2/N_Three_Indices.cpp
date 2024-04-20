#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Tan = 1, n, m;
void Solve()
{
   cin >> n;
   vector<ll> v(n);
   for (int i = -1; ++i < n;)
      cin >> v[i];

   for (int i = 0; i < n - 2; i++)
      if (v[i] < v[i + 1] && v[i + 1] > v[i + 2])
      {
         cout << "YES\n";
         cout << i + 1 << " " << i + 2 << " " << i + 3;
         return;
      }
   cout << "NO";
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
