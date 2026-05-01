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
        while(x>=y)
        {
            x-=y;
            x+=n;
        }
        cout << x << endl;
    }
    return 0;
}