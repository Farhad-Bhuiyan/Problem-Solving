#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> f(n + 1), s(m + 1), a(m + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> f[i];
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> s[i];
    }
    int k = 1, d = 1;
    int c = 0;
    while (d <= m)
    {
        if (f[k] < s[d] && k <= n)
        {
            k++;
            c++;
        }
        else
        {
            a[d] = c;
            d++;
        }
    }
    for (int i = 1; i <= m; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}