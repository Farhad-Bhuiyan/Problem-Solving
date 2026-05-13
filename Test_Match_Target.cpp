#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    int f1=0,f2=0;
    if(x>y)
    {
        f2+=abs(x-y)+z;
    }
    else
    {
        f1=abs(x-y);
        f2=abs(f1-z);
    }
    if(f1>z)
    {
        cout <<  0 << endl;
    }
    else
    {
        cout << f2+1 << endl;
    }
    return 0;
}