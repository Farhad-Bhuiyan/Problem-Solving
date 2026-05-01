#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    long long ans = 0;
    vector<int> v(n), su(n);
    for (int &i : v)
        cin >> i;
    int l = 0, r = 0;
    long long sum = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (sum > k)
            {
                sum -= v[l];
                l++;
            }
            if (sum <= k)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}