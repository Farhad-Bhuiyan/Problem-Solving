#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,k;
    cin >> x >> y >> k;
    int r=abs(x-y);
    if(r<=k)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}