#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, m;
void solve()
{
   int c = 0;
   string s;
   cin >> n >> s;
   stack<char> st;

   for (int i = 0; i < n; i++)
   {
      if (s[i] == '(')
         st.push(s[i]);
      else if (!st.empty())
         st.pop();
   }
   cout << st.size() << '\n';
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--)
      solve();
}
