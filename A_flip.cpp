#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin >> x;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='0')
        {
            cout << "1" ;
        }
        else
        {
            cout << "0" ;
        }
    }
    cout << endl;
    return 0;
}