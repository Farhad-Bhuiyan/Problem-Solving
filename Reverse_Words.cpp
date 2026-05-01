#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    getline(cin,x);
    stringstream s(x);
    string y;
    s >> y;
    reverse(y.begin(),y.end());
    cout << y ;
    while(s >> y)
    {
        reverse(y.begin(),y.end());
        cout << " " << y ;
    }
    return 0;
}