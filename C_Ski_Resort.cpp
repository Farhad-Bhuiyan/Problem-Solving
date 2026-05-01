#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<long long> v(n);
        for (long long &i : v)
        {
            cin >> i;
        }
        long long r = 0, c = 0, ans = 0;
        while (r < n)
        {
            if (v[r] <= q)
            {
                c++;
            }
            else
            {
                if (c >= k)
                {
                    ans += ((c - k + 1) * (c - k + 2) / 2);
                }
                c = 0;
            }
            r++;
        }
        if (c >= k)
        {
            ans += ((c - k + 1) * (c - k + 2) / 2);
        }
        cout << ans << endl;
    }
}