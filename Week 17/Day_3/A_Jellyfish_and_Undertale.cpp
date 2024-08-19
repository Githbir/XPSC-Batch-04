#include <bits/stdc++.h>
using namespace std;
#define int long long
int t = 1, n, m, k, x;
void Solve()
{
   int a,b;
   cin >>a>>b>> n;
   vector<int> v(n);
   int ans=b;
   for (int i = 0; i < n; i++) cin >> v[i];

   for(auto i:v)ans+=min(i,a-1);
   cout<<ans<<endl;
}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> t;
   while (t--)
      Solve();
}
