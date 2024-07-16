#include <bits/stdc++.h>
using namespace std;
#define int long long
int t, n;
void sol()
{
   cin >> n;
   vector<int> a(n), b;

   for (int i = 0; i < n; i++)
      cin >> a[i];
   if (a[0] != n)
      cout << "NO\n";
   else
   {
      int k = 0, f = 0;
      for (int i = n - 1; i >= 0; i--)
         while (a[i] > k)
            k++, b.push_back((i + 1));

      for (int i = 0; i < n; i++)
         if (a[i] != b[i])
         {
            f = 1;
            break;
         }
      f ? cout << "NO\n" : cout << "YES\n";
   }
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> t;
   while (t--)
      sol();
}