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
        string x;
        cin >> x;
        int i = 0;
        while (i < n && x[i] != 'z')
        {
            i++;
        }
        while (i < n && x[i] == 'z')
        {
            x[i] = 'a';
            i++;
        }
        cout << x << endl;
    }
    return 0;
}