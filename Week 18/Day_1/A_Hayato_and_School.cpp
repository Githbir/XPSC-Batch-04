#include <bits/stdc++.h>
using namespace std;
#define int long long
int t=1,n,m,k,x;
void Solve()
{
   cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++)cin>>a[i];
   int c=0,c1=0;
   for(auto i:a)if(i%2)c++;else c1++;

   if(c>=3)
   {
      cout<<"YES\n";
      c=3;
      for(int i=0;i<n;i++)
      {
         if(a[i]%2)
         cout<<i+1<<' ',c--;
         if(c==0){cout<<endl;break;}
      }
      return;
   }
   if(c1>=2&&c>=1)
   {
      cout<<"YES\n";
      c=1,c1=2;
      for(int i=0;i<n;i++)
      {
         if(a[i]%2)
         cout<<i+1<<' ',c--;
         if(c==0){break;}
      }
      for(int i=0;i<n;i++)
      {
         if(a[i]%2==0)
         cout<<i+1<<' ',c1--;
         if(c1==0){cout<<endl;break;}
      }
      return;
   }
   cout<<"NO\n";
}
int32_t main()
{
   ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
   cin>>t;
   while(t--)Solve();
}
