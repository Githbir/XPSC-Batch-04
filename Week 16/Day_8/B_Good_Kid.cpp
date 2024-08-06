#include <bits/stdc++.h>
using namespace std;
#define int long long
#define f for (int i = 0; i < n; i++)
int t = 1, n, m, k;
void Solve()
{
    cin >> n;
    vector<int> a(n);
    f cin >> a[i];

    sort(a.begin(), a.end());
    a[0]++;

    cout << accumulate(a.begin(), a.end(), 1, multiplies<int>()) << '\n';
}
int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cin >> t;
    while (t--)
        Solve();
}
