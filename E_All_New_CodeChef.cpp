#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    if(a<b)
    {
        cout << "Old" << endl;
    }
    else if(a>b)
    {
        cout << "New" << endl;
    }
    else
    {
        cout << "Same" << endl;
    }
    return 0;
}