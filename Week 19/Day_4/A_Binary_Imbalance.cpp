#include <bits/stdc++.h>
using namespace std;
#define e '\n'
#define int long long
int t=1,n,m,k,x;
void Solve()
{
   string a;
   cin>>n>>a;
   int c=0;
   for(int i=0;i<n;i++)if(a[i]=='1')c++;
   if(c==a.size())cout<<"NO\n";
   else cout<<"YES"<<e;
}
int32_t main()
{
   ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
   cin>>t;
   while(t--)Solve();
}
