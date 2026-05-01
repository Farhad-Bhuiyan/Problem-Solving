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
        vector<long long> v(n);
        bool fl1 = false, fl2 = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 67)
            {
                fl2 = true;
            }
        }
        
        if (fl2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}