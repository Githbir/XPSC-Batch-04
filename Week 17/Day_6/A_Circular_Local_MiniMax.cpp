#include <bits/stdc++.h>
using namespace std;
#define e cout<<'\n';
#define o cout<<
#define int long long
int t=1,n,m,k,x;
void Solve()
{
   cin>>n;
   vector<int>a(n),b,c,d;
   for(int i=0;i<n;i++)cin>>a[i];
   sort(a.begin(),a.end());

   if(n%2==1){o "NO",e return;}

   for(int i=0;i<n/2;i++)b.push_back(a[i]);
   for(int i=n/2;i<n;i++)c.push_back(a[i]);

   for(int i=0;i<n/2;i++)if(b[i]<c[i])d.push_back(b[i]),d.push_back(c[i]);
   
   if (d.size() != n) {o "NO", e return;}

   int ok=0;
   for(int i=1;i<n-1;i++)
      if (d[i]>d[i-1]&&d[i]>d[i+1]) continue;
      else if (d[i]<d[i-1]&&d[i]<d[i+1]) continue;
      else {ok=1;break;}

   if(ok){o "NO",e return;}
   else o "YES";e
   for(auto i:d)o i, o ' ';e
}
int32_t main()
{
   ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
   cin>>t;
   while(t--)Solve();
}
