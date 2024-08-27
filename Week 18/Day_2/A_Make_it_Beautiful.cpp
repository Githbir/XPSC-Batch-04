#include <bits/stdc++.h>
using namespace std;
#define int long long
#define e <<'\n';
int t=1,n,m,k,x;
void Solve()
{
   cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++)cin>>a[i];
   
   sort(a.begin(),a.end());
   if(a[0]==a.back())cout<<"NO\n";
   else
   {
      cout<<"YES\n";
      for(int i=0;i<n/2;i++)
      cout<<a[i]<<' '<<a[n-i-1]<<' ';

      if(n%2)cout<<a[n/2];
      cout e;
   }
}
int32_t main()
{
   ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
   cin>>t;
   while(t--)Solve();
}
