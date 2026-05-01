#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string x,y;
        cin >> x >> y;
        int od1x=0,ev1x=0,od0y=0,ev0y=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0 && x[i]=='1')
            {
                od1x++;
            }
            else if((i%2!=0 && x[i]=='1'))
            {
                ev1x++;
            }
            if((i%2!=0 && y[i]=='0'))
            {
                ev0y++;
            }
            else if((i%2==0 && y[i]=='0'))
            {
                od0y++;
            }
        }
        if(od1x <= ev0y && ev1x <=od0y)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}