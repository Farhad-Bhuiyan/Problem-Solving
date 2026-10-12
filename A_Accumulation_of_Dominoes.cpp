#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;

    while(t--)
    {
        long long a,b;
        cin >> a >> b;
        if(a==1 && b==1)
        {
            cout << 0 << endl;
        }
        else if(a!=1 && b==1)
        {
            cout << a-1 << endl;
        }
        else
        {
            cout << a*(b-1) << endl;
        }
    }

    return 0;
}