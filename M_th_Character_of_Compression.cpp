#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    int m;
    cin >> x >> m;
    long long p = 0;
    char l;
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] >= 'a' && x[i] <= 'z')
        {
            l = x[i];
            p++;
            if (p == m)
            {
                cout << l << endl;
                return 0;
            }
        }
        else if (x[i] >= '2' && x[i] <= '9')
        {
            int r = x[i] - '0';
            for (int j = 1; j < r; j++)
            {
                p++;
                if (p == m)
                {
                    cout << l << endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}