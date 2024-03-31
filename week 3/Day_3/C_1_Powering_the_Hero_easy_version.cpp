#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   cin >> n;
   priority_queue<ll> q;
   ll sum = 0, a[n];
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
      if (a[i] == 0 && !q.empty())
      {
         sum = sum + q.top();
         q.pop();
      }
      else
         q.push(a[i]);
   }
   cout << sum << endl;
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      solve();
}
