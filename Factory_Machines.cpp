#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, t;
    cin >> n >> t;

    vector<int> a(n);

    for (int &i : a)
        cin >> i;

    auto ok = [&](long long sec)
    {
        long long c = 0;

        for (int i = 0; i < n; i++)
        {
            c += sec / a[i];

            if (c >= t)
                return true;
        }

        return false;
    };

    long long l = 1, r = 1e18;

    while (l < r)
    {
        long long mid = l + (r - l) / 2;

        if (ok(mid))
            r = mid;
        else
            l = mid + 1;
    }

    cout << l << '\n';

    return 0;
}