#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll Tan = 1, n, m, k, c, sum, ans, x, Q;
void Solve()
{
   cin >> n;
   vector<ll> a(n);
   for (int i = 0; i < n; i++)
      cin >> a[i];

   sort(a.begin(), a.end());
   // for (int i = 0; i < n; i++)
   //    cout << a[i].first << " " << a[i].second << endl;
   cin >> Q;
   while (Q--)
   {
      cin >> k;
      int l = 0, r = n - 1, pos = 0;
      while (l <= r)
      {
         int mid = (l + r) / 2;

         if (a[mid] <= k)
            pos = mid + 1, l = mid + 1;
         else
            r = mid - 1;
      }
      cout << pos << endl;
   }
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   // cin >> Tan;
   while (Tan--)
   {
      c = sum = ans = 0;
      Solve();
      cout << '\n';
   }
}
