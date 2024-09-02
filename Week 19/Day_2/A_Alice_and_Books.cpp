#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Test = 1, n, m, k;
void Sol()
{
   cin >> n;
   int a[n], mx = 0;
   for (int i = 0; i < n; i++)
      cin >> a[i];
   sort(a, a + n - 1, greater<int>());
   cout << a[0] + a[n - 1] << '\n';
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> Test;
   while (Test--)
      Sol();
}
