#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        string x;
        cin >> x;

        bool fl = false;
        if (n % 2 == 0)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (x[i] == x[i + 1])
                {
                    fl = true;
                    break;
                }
            }
        }
        cout << (fl?"YES":"NO") << endl;
    }

    return 0;
}