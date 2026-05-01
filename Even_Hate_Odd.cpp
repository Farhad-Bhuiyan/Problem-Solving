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
        int a[n];
        if (n % 2 != 0)
        {
            for(int i=0;i<n;i++)
            {
                cin >> a[i];
            }
            cout << "-1" << endl;
            continue;
        }
        int e = 0, o = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
        if(e==n||o==n)
        {
            cout << n/2 << endl;
        }
        else if(e>n/2)
        {
            cout << e-n/2 << endl;
        }
        else if(o>n/2)
        {
            cout << o-n/2 << endl;
        }
        else if(e==o)
        {
            cout << "0"  << endl;
        }
    }
    return 0;
}