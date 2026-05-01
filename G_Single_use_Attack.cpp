#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int H, X, Y;
        cin >> H >> X >> Y;

        int normal_only = ceil((double)H / X);
        int special_first;
        if (H - Y > 0)
        {
            special_first = 1 + ceil((double)(H - Y) / X);
        }
        else
        {
            special_first = 1;
        }

        cout << min(normal_only, special_first) << endl;
    }

    return 0;
}