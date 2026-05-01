#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        int su=0;
        while(a>=x)
        {
            su+=y;
            a-=x;
        }
        cout << a+b+su << endl;
    }
    return 0;
}