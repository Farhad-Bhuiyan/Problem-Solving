#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        int n,x;
        cin >> n >> x;
        if(n==0 && x==0)
        {
            break;
        }
        else if(n>x)
        {
            cout << x << " " << n << endl;
        }
        else if(n<x)
        {
            cout << n << " " << x << endl;
        }
        else if(n==x)
        {
            cout << n << " " << x << endl;
        }
    }
    return 0;
}