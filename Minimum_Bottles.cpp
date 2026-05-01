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
        int a[n];
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
        int r=ceil((float)sum/x);
        cout << r << endl;
    }
    return 0;
}
