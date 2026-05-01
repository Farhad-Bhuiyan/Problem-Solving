#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin >> x;
    unordered_map<char, int> m;
    for (int i = 0; i < x.size(); i++)
    {
        m[x[i]]++;
    }
    int od = 0;
    char c=NULL;
    for (auto i : m)
    {
        if (i.second % 2 != 0)
        {
            od++;
            c = i.first;
        }
    }
    if (od > 1)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        int l = 0, r = x.size() - 1;
        string y(x.size(), ' ');
        if (od)
        {
            y[x.size() / 2] = c;
            m[c]--;
        }

        for (auto i : m)
        {
            while (i.second != 0)
            {
                y[l++] = i.first;
                y[r--] = i.first;
                i.second -= 2;
            }
        }
        cout << y << endl;
    }
    return 0;
}