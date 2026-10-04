#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;
        if(n&1)
        {
            long long c=n;
            cout << n/2 << endl;
            while(c>3)
            {
                c-=2;
                cout << 2 << " ";
            }
            cout << 3 << endl;
        }
        else
        {
            cout << n/2 << endl;
            while(n>0)
            {
                n-=2;
                cout << 2 << " ";
            }
            cout << endl;
        }
    }

    return 0;
}