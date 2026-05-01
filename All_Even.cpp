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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool f = true,lo=false;
        while (n > 1)
        {
            v[n - 2] += v[n - 1];
            v.pop_back();
            --n;
            bool fl = true;
            for (int i = 0; i < n; i++)
            {
                if (v[i] % 2 != 0)
                {
                    fl = false;
                    break;
                }
            }
            if (fl)
            {
                cout << "Yes" << endl;
                lo=true;
                break;
            }
            else
            {
                f = false;
            }
        }
        if(lo)
        {
            continue;
        }
        if(!f)
        {
            cout << "No" << endl;
        }
    }
    return 0;
}