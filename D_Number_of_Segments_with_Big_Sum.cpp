#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    long long ans = 0, sum = 0;
    long long l = 0, r = 0;
    while (r < n)
    {
        sum += v[r];
        while (sum >= k && l <= r)
        {
            ans += n - r;
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}