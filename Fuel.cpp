#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    int r=x*y;
    if(r>=100)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}