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
        int n, k;
        cin >> n >> k;
        vector<int> a(n), s1, s2;
        for (int &i : a)
            cin >> i;
        sort(a.begin(), a.end());
        if (k == 1)
        {
            if (n == 2)
                cout << a[n - 1] * 2 + a[n - 2] * 2 << endl;
            else if (n == 3)
                cout << a[n - 1] * 2 + a[n - 2] + a[0] << endl;
            else
                cout << a[n - 1] * 2 + a[n - 2] + a[0] << endl;
        }

        else
        {
            cout << a[n - 1] + a[0] + a[n - 2] + a[n - k - 1] << endl;
        }
    }
}