#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), d;
        for (int &i : v)
        {
            cin >> i;
        }
        d = v;
        sort(d.begin(), d.end());
        vector<int> se;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != d[i])
            {
                se.push_back(v[i]);
            }
        }
        if (se.size() == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << se.size() << endl;
            for (int i : se)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}