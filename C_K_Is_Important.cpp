#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int sum = 0;
    for (auto &x : v)
        cin >> x;
    for (int i = 0; i <= n - k; i++)
    {
        if (i < k - 1)
        {
            sum += max(v[i], v[n - i - 1]);
        }
        else
            sum += v[i];
    }
    cout << sum;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }

    return 0;
}