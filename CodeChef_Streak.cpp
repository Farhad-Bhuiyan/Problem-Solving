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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int om = 0, adi = 0,to = 0, ta = 0;;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                if (to > om)
                {
                    om = to;
                }
                to = 0;
            }
            else
            {
                to++;
            }
            if (b[i] == 0)
            {
                if (ta > adi)
                {
                    adi = ta;
                }
                ta = 0;
            }
            else
            {
                ta++;
            }
        }
        if (to > om)
        {
            om = to;
        }
        if (ta > adi)
        {
            adi = ta;
        }
        if (om > adi)
        {
            cout << "Om" << endl;
        }
        else if (adi > om)
        {
            cout << "Addy" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
}