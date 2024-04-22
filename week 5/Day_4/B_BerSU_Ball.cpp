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

   cin >> m;
   vector<int> v1(m);
   for (int i = -1; ++i < m;)
      cin >> v1[i];

   sort(v.begin(), v.end());
   sort(v1.begin(), v1.end());

   ll c = 0;
   for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
         if (abs(v[i] - v1[j]) <= 1)
            c++, v1[j] = INT_MAX, v[i] = INT_MAX;

   cout << c;
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   // cin >> Tan;
   while (Tan--)
   {
      Solve();
      cout << '\n';
   }
}
