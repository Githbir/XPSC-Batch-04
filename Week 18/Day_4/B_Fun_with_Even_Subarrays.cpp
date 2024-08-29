#include <bits/stdc++.h>
using namespace std;
#define int long long
int t=1,n,m,k,x;
void Solve()
{
   cin>>n;
   vector<int>a(n+1);
   for(int i=1;i<=n;i++)cin>>a[i];

   vector<int> b = a;
   reverse(b.begin()+1,b.end());
   int ans = 0, k= 1;
   while( k < n )
   {
      if( b[k+1] == b[1] )
      {
         k++;
         continue;
      }
      ans ++;
      k*= 2;
   }
   cout << ans << '\n';
}
int32_t main()
{
   ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
   cin>>t;
   while(t--)Solve();
}
