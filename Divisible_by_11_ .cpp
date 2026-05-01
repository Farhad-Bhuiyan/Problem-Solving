#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin >> x;
    int odd=0,even=0;
    for(int i=0;i<x.size();i++)
    {
        if(i%2==0)
        {
            odd+=x[i]-'0';
        }
        else
        {
            even+=x[i]-'0';
        }
    }
    if((odd-even)%11==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}