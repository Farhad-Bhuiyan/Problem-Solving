#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin >> x;
    int e=0,g=0,y=0,p=0,t=0;
    for(char ch:x)
    {
        if(ch=='E'||ch=='e')
        {
            e++;
        }
        else if(ch=='G'|| ch=='g')
        {
            g++;
        }
        else if(ch=='Y'|| ch=='y')
        {
            y++;
        }
        else if(ch=='P'|| ch=='p')
        {
            p++;
        }
        else if(ch=='T'|| ch=='t')
        {
            t++;
        }
    }
    if(e==g && g==y && y==p && p==t)
    {
        cout << e << endl;
    }
    else
    {
        cout << min({e,g,y,p,t}) << endl;
    }
    return 0;
}