#include <bits/stdc++.h>
using namespace std;
#define int long long
#define in for (int i = 0; i < n; i++)
int t = 1, n, m, k, x;
void Solve()
{
   cin >> n;
   vector<int> a(n),b;
   in cin >> a[i];

   b=a;
   sort(b.begin(),b.end());
   if(b==a)cout<<0<<'\n';
   else if(a[0]==1||a.back()==n)cout<<1<<'\n';
   else if(a[0]!=n||a.back()!=1)cout<<2<<'\n';
   else cout<<3<<'\n';
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> t;
   while (t--)
      Solve();
}
