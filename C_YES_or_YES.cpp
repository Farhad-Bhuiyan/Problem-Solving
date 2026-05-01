#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        if(x=="YES" || x=="YeS" || x=="YEs" || x=="yES" || x=="yeS" || x=="Yes" || x=="yEs" || x=="yes")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}