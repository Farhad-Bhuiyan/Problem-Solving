#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n < m)
        {
            if (m % n == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                int ne1 = m - ((m / n)*n);
                int ne2 = (((m / n) + 1) * n) - m;
                cout << min(ne1, ne2) << endl;
            }
        }
        else if (n > m)
        {
            cout << n - m << endl;
        }
    }
    return 0;
}