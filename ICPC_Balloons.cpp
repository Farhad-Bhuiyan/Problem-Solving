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
        string x;
        cin >> x;
        bool check[26];
        for (int i = 0; i < 26; i++)
            check[i] = true;
        int sum = 0;
        for (int i = 0; i < x.size(); i++)
        {
            if (check[x[i] - 'A'] == true)
            {
                check[x[i] - 'A'] = false;
                sum += 2;
            }
            else
            {
                sum += 1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}