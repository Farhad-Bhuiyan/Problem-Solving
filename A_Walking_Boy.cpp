#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long &i : a)
            cin >> i;
        long long c = 0;
        for (int i = 1; i < n; i++)
        {
            if (abs(a[i] - a[i - 1]) >= 240)
                c += 2;
            else if (abs(a[i] - a[i - 1]) >= 120)
                c++;
        }
        if ((1439 - a[n - 1]) >= 120)
            c++;
        if ((1439 - a[n - 1]) >= 240)
            c++;
        if (a[0] >= 240)
            c += 2;
        if (a[0] >= 120)
            c++;
        if (c >= 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}P)