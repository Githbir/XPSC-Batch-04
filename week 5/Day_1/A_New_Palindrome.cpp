#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Tan = 1, n, m;
void Solve()
{
   string s;
   cin >> s;
   sort(s.begin(), s.end());
   ll c = 0, fre[26] = {0}, L = s.size();

   for (int i = 0; i < L; i++)
      fre[int(s[i] - 'a')]++;

   for (int i = 0; i < 26; i++)
      if (fre[i] >= 2)
         c++;

   if (c < 2 || L < 4)
      cout << "NO";
   else
      cout << "YES";
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
