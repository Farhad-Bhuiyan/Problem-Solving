#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    map<string, string> cht;
    map<string, int> s, sc;
    string x, y;
    for (int i = 0; i < n; i++)
    {

        cin >> x >> y;
        cht[x] = y;
    }
    for (int i = 0; i < m; i++)
    {

        cin >> x;
        s[x]++;
        sc[cht[x]]++;
    }
    string max = "";
    int count = 0;
    for (auto &a : sc)
    {
        if ((a.second > count) || (a.second == count && a.first < max))
        {
            max = a.first;
            count = a.second;
        }
    }
    string scc = "";
    int c = 0;
    for (auto &a : s)
    {
        if ((a.second > c) || (a.second == c && a.first < scc))
        {
            scc = a.first;
            c = a.second;
        }
    }
    cout << max << endl;
    cout << scc << endl;
    return 0;
}

