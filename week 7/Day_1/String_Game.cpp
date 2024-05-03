#include <bits/stdc++.h>
using namespace std;
#define nn cout << '\n';
#define ll long long int
ll Tan = 1, n, m;
void Solve()
{
   string a;
   cin >> n >> a;
   ll c = 0;
   for (int i = 0; i < n; i++)
      if (a[i] == '1')
         c++;
   ll mn = min(c, n - c);
   if (mn % 2)
      cout << "Zlatan\n";
   else
      cout << "Ramos\n";
}
int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Tan;
   while (Tan--)
      Solve();
}
