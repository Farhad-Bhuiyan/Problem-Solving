#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;
        if(n<4)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 4 << " " << 2 << " " << 3 << " " << 1 ;
            for(int i=5;i<=n;i++)
            {
                cout << " " << i;
            }
            cout << endl;
        }
    }

    return 0;
}