#include <bits/stdc++.h>
using namespace std;
#define e cout<<'\n';
#define o cout<<
#define int long long
int t=1,n,m,k,x;
void Solve()
{
   cin>>n>>k;
   vector<int>a(n);
   for(int i=0;i<n;i++)cin>>a[i];

   map<int,int>m;
   for(int i=0;i<n;i++)
   {
   if(a[i]==a[0])m[a[0]]++;
   if(a[i]==a.back() && m[a[0]]>=k)m[a.back()]++;
   }

   (m[a[0]]>=k && a[0]==a.back()) || (m[a.back()]>=k) ?o"YES":o"NO";e
}
int32_t main()
{
   ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
   cin>>t;
   while(t--)Solve();
}
