#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, q;
    cin >> n >> m >> q;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    while (q--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int sum = 0;
        for (int i = x1; i <=x2; i++)
        {
            for (int j = y1; j <=y2; j++)
            {
                sum+=a[i][j];
            }
        }
        cout << sum << endl;
    }
}