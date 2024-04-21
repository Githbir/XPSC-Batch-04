#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll Tan = 1;
void Solve()
{
   string s;
   cin >> s;
   ll n = s.size(), ans = 0;
   vector<ll> v_arr[27], v;

   for (int i = 0; i < n; i++)
      v_arr[s[i] - 96].push_back(i + 1);

   if (s[0] <= s[n - 1])
      for (int i = s[0] - 96; i <= s[s.size() - 1] - 96; i++)
      {
         ans = ans + v_arr[i].size();
         for (int j = 0; j < v_arr[i].size(); j++)
            v.push_back(v_arr[i][j]);
      }
   else
      for (int i = s[0] - 96; i >= s[s.size() - 1] - 96; i--)
      {
         ans = ans + v_arr[i].size();
         for (int j = 0; j < v_arr[i].size(); j++)
            v.push_back(v_arr[i][j]);
      }

   cout << abs(s[0] - s[s.size() - 1]) << " " << v.size() << endl;

   for (int i = 0; i < v.size(); i++)
      cout << v[i] << " ";
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Tan;
   while (Tan--)
   {
      Solve();
      cout << '\n';
   }
}
