#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while (true)
    {
        int n, q;
        cin >> n >> q;
        if(n==0  && q==0)break;
        cout << "CASE# " << t << ":" << endl;
        t++;
        vector<int> a(n);
        for (int &i : a)
            cin >> i;
        sort(a.begin(), a.end());
        for (int i = 1; i <= q; i++)
        {
            int k;
            cin >> k;
            auto idx = lower_bound(a.begin(), a.end(), k);
            if (idx != a.end())
            {
                if (*idx == k)
                {
                    cout << k << " found at " << (lower_bound(a.begin(), a.end(), k) - a.begin())+1 << endl;
                }
                else
                {
                    cout << k << " not found" << endl;
                }
            }
            else
            {
                cout << k << " not found" << endl;
            }
        }
    }
    return 0;
}