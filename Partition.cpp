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
        vector<int> a(n);
        map<int, int> mp;
        for (int &i : a)
        {
            cin >> i;
            mp[i]++;
        }
        int mx = 1;
        for (auto i : mp)
        {
            mx = max(i.second, mx);
        }
        int ans = 0;
        int i = 0;
        set<int> s;
        while (i < n)
        {
            s.insert(a[i]);
            if ((i + 1) % mx == 0)
            {
                ans += s.size();
                s.clear();
            }
            i++;
        }
        if (!s.empty())
            ans += s.size();
        cout << ans << endl;
    }
    return 0;
}