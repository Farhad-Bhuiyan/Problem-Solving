#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int su=0;
    for(int i=0;i<2;i++)
    {
        if(a>=b)
        {
            su+=a;
            --a;
        }
        else
        {
            su+=b;
            --b;
        }
    }
    cout << su << endl;
    return 0;
}