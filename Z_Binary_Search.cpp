#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    while (q--)
    {
        int k;
        cin >> k;
        bool fa = false;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] == k)
            {
                fa = true;
                break;
            }
            if (v[mid] < k)
            {
                l = mid + 1;
            }
            else if (v[mid] > k)
            {
                r = mid - 1;
            }
        }
        if (fa)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}