#include <bits/stdc++.h>
using namespace std;
#define e '\n'
#define int long long
int t=1,n,m,k,x;
void Solve()
{
   int n,a,b;
   cin>>n>>a>>b;
   int ans=0;
   if(b>a)
   {
      int x=b-a;
      int s1=(x*(x+1))/2;
      x=max(0LL,x-n);
      int s2=(x*(x+1))/2;
      ans=s1-s2;
   }
   ans+=n*a;
   cout<<ans<<e;
}
int32_t main()
{
   ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
   cin>>t;
   while(t--)Solve();
}
