#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n==1)
    {
        cout << n << endl;
        return 0;
    }
    int a[n + 1][n + 1];
    int k = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1)
            {
                cout << j;
            }
            else if (i != 1 && i != n)
            {
                if (j >= 2 && j <= n - 1)
                {
                    cout << " ";
                }
                else if (j == 1)
                {
                    cout << i;
                }
                else
                {
                    cout << k--;
                }
            }
        }
        if (i == n)
        {
            for (int l = n; l >= 1; l--)
            {
                cout << l;
            }
        }
        cout << endl;
    }
    return 0;
}