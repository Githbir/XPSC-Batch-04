#include <bits/stdc++.h>
using namespace std;
#define int long long
int Tan = 1, n, a, b;
int lcm()
{
   return ((a / __gcd(a, b)) * b);
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   int p, q, s = 0, ans = 0;
   cin >> n >> a >> b >> p >> q;

   ans += ((n / a) * p);
   ans += ((n / b) * q);
   int Lcm = lcm();

   s = n / Lcm;
   ans -= (s * (p + q));
   ans += (s * max(p, q));

   cout << ans << '\n';
}