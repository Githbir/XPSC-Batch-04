#include <bits/stdc++.h>
using namespace std;
#define e '\n'
#define int long long
int t=1,n,m,k,x;
void Solve()
{
   cin>>n;
   vector<int>a;
   int mx=0,mn=INT_MAX,x,y;
   for(int i=0;i<n;i++)
   {
      cin>>x>>y;
      if(x==3)a.push_back(y);
      if(x==1)mx=max(mx,y);
      if(x==2)mn=min(mn,y);
   }
   int c=0;
   for(auto i:a)if(i>=mx&&i<=mn)c++;
   cout<<max(0LL,mn+1-mx-c)<<e;
}
int32_t main()
{
   ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
   cin>>t;
   while(t--)Solve();
}
