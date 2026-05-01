#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int co = 0;
    map<string, string> mp1, mp2;
    while (n--)
    {
        string x, y;
        cin >> x >> y;
        if (mp2.find(x) != mp2.end())
        {
            string z = mp2[x];
            mp1[z] = y;
            mp2.erase(x);
            mp2[y] = z;
        }
        else
        {
            mp1[x] = y;
            mp2[y] = x;
        }
    }
    cout << mp1.size() << endl;
    for (auto it : mp1)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}