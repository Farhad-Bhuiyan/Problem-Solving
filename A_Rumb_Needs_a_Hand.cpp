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
        vector<long long> v(n + 1), ans;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            if (i != v[i])
                ans.push_back(v[i]);
        }
        bool fl = false;
        if (ans.size() > 1)
        {
            for (int i = 0; i < ans.size() - 1; i++)
            {
                if (ans[i] < ans[i + 1])
                {
                    fl = true;
                }
            }
        }
        if (!fl)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
