#include <bits/stdc++.h>
using namespace std;
#define int long long
int t=1,n,m,k,x;
void Solve()
{
   cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++)cin>>a[i];

   int c=0,x=0;
   string ok="YES\n";

   for(int i=0;i<n;i++)
   {
      c+=i;
      x+=a[i];
      if(x<c)ok="NO\n";
   }
   cout<<ok;
}
int32_t main()
{
   ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
   cin>>t;
   while(t--)Solve();
}
