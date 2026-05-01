#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    long long ans = INT_MAX, sum = 0;
    long long l = 0, r = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum >= k)
        {
            while (sum >= k && l <= r)
            {
                ans = min(ans, r - l + 1);
                sum -= v[l];
                l++;
            }
        }
       r++;
    }
    if (ans == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}