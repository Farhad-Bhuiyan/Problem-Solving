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
        vector<int> v(n),v2;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        v2=v;
        int count = 0,co1 = 0;
        int mi = 0, mx = 0;
        while (1)
        {
            auto it1 = v.begin();
            auto it2 = --v.end();
            int min = *it1, max = *it2;
            if ((min + max) % 2 == 0)
            {
                break;
            }
            v.erase(v.begin());
            count++;
        }
        while (1)
        {
            auto it1 = v2.begin();
            auto it2 = --v2.end();
            int min = *it1, max = *it2;
            if ((min + max) % 2 == 0)
            {
                break;
            }
            v2.erase(--v2.end());
            co1++;
        }
        if(co1<count)
        {
            cout << co1 << endl;
        }
        else if(co1>count)
        {
            cout << count << endl;
        }
        else
        {
            cout << co1 << endl;
        }
    }
    return 0;
}