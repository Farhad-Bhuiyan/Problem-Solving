#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y;
        cin >> x >> y;
        if(x==0 && y==0)
        {
            cout << 0 << endl;
            continue;
        }
        int ysize=y*4;
        int nsy=ceil(ysize/8.0);
        int total=nsy*15;
        int nx=total-ysize;
        int scr=0;
        if(nx>=x)
        {
            scr+=nsy;
        }
        else
        {
            scr+=nsy;
            int t=abs(nx-x);
            while(t>=15)
            {
                scr++;
                t-=15;
            }
            if(t>=1)
            {
                scr++;
            }
        }
        if(scr==0)
        {
            cout << ++scr  << endl;
        }
        else
        {
            cout << scr << endl;
        }
    }
    return 0; 
}