#include <bits/stdc++.h>
using namespace std;
#define int long long
int Test = 1, n, m, k;
void Sol()
{

   string s, s1;
   cin >> s;
   int n = s.size();
   n = n * 2 - 1;
   s1 = s;
   reverse(s1.begin(), s1.end());
   if (s == s1)
      cout << 0 << endl;
   else
   {
      cout << 3 << '\n';
      cout << "L" << ' ' << 2 << '\n';
      cout << "R" << ' ' << 2 << '\n';
      cout << "R" << ' ' << n << '\n';
   }
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   Sol();
}
