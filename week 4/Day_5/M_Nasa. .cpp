#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Tan = 1, n;
vector<ll> palindrome;
void Solve()
{
   cin >> n;
   ll c[32768] = {0};
   vector<ll> v(n);
   for (int i = 0; i < n; i++)
   {
      cin >> v[i];
      c[v[i]]++;
   }
   ll ans = n;
   for (int i = 0; i < n; i++)
      for (int j = 0; j < palindrome.size(); j++)
      {
         ll x = v[i] ^ palindrome[j];
         ans = ans + c[x];
      }
   cout << ans / 2;
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   for (int i = 0; i < 32768; i++) // 1 << 15 = 32768
   {
      string s = to_string(i);
      string tem = s;
      reverse(tem.begin(), tem.end());
      if (s == tem)
         palindrome.push_back(i);
   }
   cin >> Tan;
   while (Tan--)
   {
      Solve();
      cout << '\n';
   }
}
