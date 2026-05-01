#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a=0,b=0;
    cin.ignore();
    string x;
    cin >> x;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='A')
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if(a>b)
    {
        cout << "Anton" << endl;
    }
    else if(b>a)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    return 0;
}