#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x,y;
    cin >> x >> y;
    if (x==y)
    {
        cout << 0 << endl;
        return 0;
    }
    int s=x.size(),co=0;
    for(int i=0;i<s;i++)
    {
        if(x[i]!=y[i])
        {
            co++;
        }
    }
    cout << co << endl;
    return 0;
}