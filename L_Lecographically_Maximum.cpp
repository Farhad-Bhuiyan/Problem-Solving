#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        long long mx = 0;
        map<long long, long long> mp;
        for (long long &i : a)
        {
            cin >> i;
            mx = max(__lg(i), mx);
        }
        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j <= mx; j++)
            {
                if ((a[i] >> j) & 1)
                    mp[j]++;
            }
        }

        // for (auto it : mp)
        // {
        //     cout << it.first << " " << it.second << endl;
        // }
        vector<long long> ans;

        while (!mp.empty())
        {
            long long vl = 0;
            for (long long i = 0; i <= mx; i++)
            {
                if (mp[i] > 0)
                {
                    vl += (1 << i);
                    mp[i]--;
                    if (mp[i] == 0)
                        mp.erase(i);
                }
                else
                {
                    mp.erase(i);
                }
            }
            ans.push_back(vl);
        }
        if (ans.size() < n)
        {
            for (long long i = ans.size(); i < n; i++)
            {
                ans.push_back(0);
            }
        }
        for (long long i : ans)
        {
            cout << i << " ";
        }
    }
    return 0;
}