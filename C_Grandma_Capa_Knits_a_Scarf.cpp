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
        string x;
        cin >> x;
        int ans = INT_MAX;
        for (char c = 'a'; c <= 'z'; c++)
        {
            int l = 0, r = n - 1;
            int count = 0;
            bool fl = true;
            while (l < r)
            {
                if (x[l] == x[r])
                {
                    l++, r--;
                }
                else
                {
                    if (x[l] == c)
                    {
                        l++, count++;
                    }
                    else if (x[r] == c)
                    {
                        r--, count++;
                    }
                    else
                    {
                        fl = false;
                        break;
                    }
                }
            }
            if (fl)
            {
                ans = min(ans, count);
            }
        }
        if (ans == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}