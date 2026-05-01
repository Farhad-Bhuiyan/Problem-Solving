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
        int max1 = -1, max2 = -1;
        int idx1 = -1, idx2 = -1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > max1)
            {
                max2 = max1;
                idx2 = idx1;
                max1 = x;
                idx1 = i;
            }
            else if (x > max2)
            {
                max2 = x;
                idx2 = i;
            }
        }
        if (idx1 < idx2)
        {
            cout << idx1 << " " << idx2 << endl;
        }
        else
        {
            cout << idx2 << " " << idx1 << endl;
        }
    }
    return 0;
}