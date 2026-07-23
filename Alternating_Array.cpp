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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &i : a)
            cin >> i;
        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 )
            {
                if(a[i] % 2 == 0)c1++;
            }
            else
            {
                if (a[i] % 2 == 1)
                    c1++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 )
            {
                if(a[i] % 2 == 1)c2++;
            }
            else
            {
                if (a[i] % 2 == 0)
                    c2++;
            }
        }
        cout << min(c1, c2) << endl;
    }
    return 0;
}