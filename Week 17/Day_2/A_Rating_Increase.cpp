#include <bits/stdc++.h>
using namespace std;
#define int long long
int t = 1, n, m, k, x;
void Solve()
{
   string a,c="",d="";
   cin>>a;

   c+=a[0];
   int f=1;
   for(int i=1;i<a.size();i++)
   if(a[i]=='0'&&f)c+=a[i];
   else d+=a[i],f=0;

   if (d.empty()) {cout << -1 << '\n';return;}

   int x=stoi(c);
   int y=stoi(d);

   if(y>x)cout<<c<<' '<<d<<'\n';
   else cout<<-1<<'\n';

}
int32_t main()
{
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
   cin >> t;
   while (t--)
      Solve();
}
