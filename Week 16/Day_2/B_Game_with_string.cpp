#include <bits/stdc++.h>
using namespace std; // use stack
#define ll long long
ll t, n, m;
void solve()
{
   string s;
   cin >> s;
   stack<char> st;

   int c = 0;
   for (int i = 0; i < s.size(); i++)
      if (!st.empty() && st.top() == s[i])
         st.pop(), c++;
      else
         st.push(s[i]);

   c % 2 == 1 ? cout << "Yes\n" : cout << "No\n";
}
int main()
{
   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
   solve();
}
