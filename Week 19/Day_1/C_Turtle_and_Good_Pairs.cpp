#include <bits/stdc++.h>
using namespace std;
#define int long long
#define e <<'\n';
int t=1,n,m,k,x;
void Solve()
{  
   string a,s="";
   cin>>n>>a;
   sort(a.begin(),a.end());
   
   for(int i=0;i<n/2;i++)s+=a[i],s+=a[n-i-1];
   if(n%2)s+=a[n/2];
   
   cout<<s e
}
int32_t main()
{
   ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
   cin>>t;
   while(t--)Solve();
}
//