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
        set<int> ma, de;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ma.insert(v[0]);
        int co = 1;
        for (int i = 1; i < n; i++)
        {
            if (ma.find(v[i]) != ma.end())
            {
                ma.erase(v[i]);
                de.insert(v[i]);
            }
            else
            {
                de.insert(v[i]);
            }
            if (ma.empty())
            {
                co++;
                ma.clear();
                ma = de;
                de.clear();
            }
        }
        cout << co << endl;
    }
    return 0;
}