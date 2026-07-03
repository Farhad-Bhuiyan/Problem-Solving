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
        int n;
        cin >> n;
        vector<long long> a(n);
        map<long long, long long> mp1, mp2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            long long c = 0;
            while (true)
            {
                mp1[a[i]]++;
                mp2[a[i]] += c;
                if (a[i] == 0)
                    break;
                a[i] /= 2;
                c++;
            }
        }
        long long x = LLONG_MAX;
        for (auto it : mp1)
        {
            if (it.second == n)
            {
                x = min(x, mp2[it.first]);
            }
        }
        cout << x << endl;
    }
    return 0;
}