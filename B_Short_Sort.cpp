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
        if(x=="abc")
        {
            cout << "YES" << endl;
        }
        else if(x[0]=='a' && x[1]=='c')
        {
            cout << "YES" << endl;
        }
        else if(x[0]=='b' && x[1]=='a')
        {
            cout << "YES" << endl;
        }
        else if(x[0]=='c' && x[1]=='b')
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