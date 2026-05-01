#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum1 = sum1 + arr[i];
        }
        if (sum1 == x)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                sum2 = sum2 + arr[i];
                if (sum2 == x)
                    swap(arr[i], arr[i + 1]);
            }
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}