#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string x;
    cin >> x;
    map<char, int> m;
    for (char c : x)
    {
        m[c]++;
    }
    int c = 0;
    char y = 0;
    for (auto it : m)
    {
        if (it.second & 1)
        {
            c++;
            y = it.first;
        }
    }
    if (c > 1)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        string z = "";
        for (auto it : m)
        {
            for (int i = 0; i < it.second / 2; i++)
            {
                z += it.first;
            }
        }
        string ans = z;
        if (y != 0)
            ans += y;
        reverse(z.begin(), z.end());
        ans += z;
        cout << ans << endl;
    }
    return 0;
}