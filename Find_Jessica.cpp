#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,d;
    getline(cin,s);
    stringstream ss(s);
    bool tr=false;
    while(ss>> d)
    {
        if(d=="Jessica")
        {
           tr=true;
           break;
        }
    }
    if(tr)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}