#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll Tan = 1, n, m;
void Solve()
{
   cin >> n;
   vector<int> v(n);

   for (int i = -1; ++i < n;)
      cin >> v[i];

   sort(v.rbegin(), v.rend());

   for (int i = -1; ++i < n;)
      cout << v[i] << ' ';
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
