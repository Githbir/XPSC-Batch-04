#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k;
void Sol()
{
   cin >> n;
   int a[n];
   map<int, int> mp;
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
      mp[a[i]]++;
   }
   priority_queue<int> pq;
   for (auto i : mp)
      pq.push(i.second);

   while (pq.size() >= 2)
   {
      int a = pq.top();
      pq.pop();
      int b = pq.top();
      pq.pop();

      a--, b--;
      if (a > 0)
         pq.push(a);
      if (b > 0)
         pq.push(b);
   }
   if (pq.size() == 0)
      cout << 0 << '\n';
   else
      cout << pq.top() << '\n';
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Test;
   while (Test--)
      Sol();
}
