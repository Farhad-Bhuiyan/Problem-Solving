#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int a1=a-1;
        int co=abs(b-c);
        int b1=co+abs(c-1);
        if(a1<b1)
        {
            cout << 1 << endl;
        }
        else if(a1>b1)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
    return 0; 
}