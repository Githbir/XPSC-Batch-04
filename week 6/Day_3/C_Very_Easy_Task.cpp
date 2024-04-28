#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll Tan = 1, n, m;
bool OK(ll t, ll n, ll x, ll y)
{
   if (t < min(x, y))
      return false;

   ll c = 1;
   t = t - min(x, y);
   c = c + (t / x + t / y);

   if (c >= n)
      return true;
   else
      return false;
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   ll n, x, y;
   cin >> n >> x >> y;
   ll l = 0, r = max(x, y) * n, mid;

   while (l + 1 < r)
   {
      mid = l + (r - l) / 2;
      if (OK(mid, n, x, y))
         r = mid;
      else
         l = mid;
   }
   cout << r;
}
