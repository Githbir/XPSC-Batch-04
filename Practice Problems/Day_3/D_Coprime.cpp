#include <bits/stdc++.h>
using namespace std;
#define int long long
#define f for (int i = 0; i < n; i++)
int t = 1, n, m, k;
void Solve()
{
    vector<int> a(1001, -1);

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> k, a[k] = i;

    int ans = -1;
    for (int i = 1; i <= 1000; i++)
        for (int j = i; j <= 1000; j++)
            if (a[i] > 0 && a[j] > 0)

                if (__gcd(i, j) == 1)
                    ans = max(ans, a[i] + a[j]);

    cout << ans << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cin >> t;
    while (t--)
        Solve();
}
