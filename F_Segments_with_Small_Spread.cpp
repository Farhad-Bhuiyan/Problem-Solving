#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    long long ans = 0;
    vector<long long> v(n), su(n);
    for (long long &i : v)
        cin >> i;
    long long l = 0, r = 0;
    multiset<long long> ms;
    while (r < n)
    {
        ms.insert(v[r]);
        if ((*ms.rbegin())-(*ms.begin()) <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (l < r)
            {
                if ((*ms.rbegin())-(*ms.begin()) <= k)
                {
                    break;
                }
                ms.erase(ms.find(v[l]));
                l++;
            }
            if ((*ms.rbegin())-(*ms.begin()) <= k)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}