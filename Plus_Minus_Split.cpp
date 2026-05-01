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
        vector<int> v(n), c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool flag=true;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]!=v[i+1])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout << "Yes" << endl;
            continue;
        }
        c=v;
        bool fl = false;
        for (int i = 0; i < n; i++)
        {
            bool f = true;
            for (int j = 0; j < n; j++)
            {
                if (i > j)
                {
                    c[j] += c[i];
                }
                else if (j >= i)
                {
                    c[j] -= c[i];
                }
            }
            for (int i = 0; i < n - 1; i++)
            {
                if (c[i] != c[i + 1])
                {
                    c = v;
                    f = false;
                    break;
                }
            }
            if (!f && i == n-1)
            {
                cout << "No" << endl;
            }
            else if (!f)
            {
                continue;
            }
            else if (f)
            {
                cout << "Yes" << endl;
                break;
            }
        }
    }
    return 0;
}