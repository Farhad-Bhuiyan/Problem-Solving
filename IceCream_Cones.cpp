#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,n;
        cin >> x >> y >> n;
        if((x-(y*n))<=0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (x-(y*n)) << endl;
        }
    }
    return 0;
}