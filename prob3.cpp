#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> m;
    while (n--)
    {
        string x;
        cin >> x;
        m[x]++;
        if (m[x] > 1)
        {
            cout << x << m[x] - 1 << endl;
        }
        else
        {
            cout << "OK" << endl;
        }
    }
    return 0;
}

