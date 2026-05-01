#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, x="EGYPT";
    cin >> s ;
    string d;
    for (int k = 0; k < s.size(); k++)
    {
        d.clear();
        for (int j = 0; j < x.size() && j + k < s.size(); j++)
        {
            d += s[k + j];
        }
        if (d == x)
        {
            cout << " ";
            k += x.size() - 1;
        }
        else
        {
            cout << s[k];
        }
    }

    return 0;
}