#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t, n;
   cin >> t;
   while (t--)
   {
      cin >> n;
      char a[n], b[6] = "Timru";
      cin >> a;
      sort(a, a + n);       
      if (strcmp(a, b) == 0) 
         cout << "YES" << endl;
      else
         cout << "NO\n";
   }
}

