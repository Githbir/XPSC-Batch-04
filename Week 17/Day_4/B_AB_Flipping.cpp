#include <bits/stdc++.h>
using namespace std;
#define e cout << '\n';
#define int long long
int t = 1, n, m, k, x;
void Solve()
{
   string a;
   cin>>n>>a;
   int l=0,r=n-1;

   while(l<r&&a[l]=='B')l++;
   while(l<r&&a[r]=='A')r--;

   int ans=max(0LL,r-l);
   cout<<ans, e
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> t;
   while (t--)
      Solve();
}
