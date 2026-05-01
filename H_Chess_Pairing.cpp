#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int u = 2 * n - x;
        if (x <= u)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << x - u << endl;
        }
    }
    return 0;
}