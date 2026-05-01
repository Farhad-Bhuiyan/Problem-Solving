#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> v(n + 1), vs(n + 1), s(n + 1), ss(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        s[i] = v[i];
    }
    vs[1] = v[1];
    for (int i = 2; i <= n; i++)
    {
        vs[i] = vs[i - 1] + v[i];
    }
    sort(s.begin(), s.end());
    ss[1] = s[1];
    for (int i = 2; i <= n; i++)
    {
        ss[i] = ss[i - 1] + s[i];
    }
    int m;
    cin >> m;
    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
        {
            if (l == 1)
            {
                cout << vs[r] << endl;
            }
            else
            {
                cout << vs[r] - vs[l - 1] << endl;
            }
        }
        else
        {
            if (l == 1)
            {
                cout << ss[r] << endl;
            }
            else
            {
                cout << ss[r] - ss[l - 1] << endl;
            }
        }
    }
}