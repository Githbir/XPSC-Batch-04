#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k;
void Sol()
{
   cin >> n;
   int N = n, k = 1;
   vector<int> v, ans;
   while (n > 0)
   {
      if (n & 1)
         v.push_back(1);
      else
         v.push_back(0);
      n = n >> 1;
   }
   ans.push_back(N);
   for (int i = 0; i < v.size() - 1; i++)
   {
      if (v[i] == 1)
      {
         N -= k;
         ans.push_back(N);
      }
      k *= 2;
   }
   while (N > 1)
   {
      N /= 2;
      ans.push_back(N);
   }
   cout << ans.size() << '\n';
   for (int i = 0; i < ans.size(); i++)
      cout << ans[i] << ' ';
   cout << '\n';
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Test;
   while (Test--)
      Sol();
}
