#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y;
        cin >> x >> y;
        for(int i=0,j=y;i<=y;i++,j--)
        {
            if(i+j==y && abs(j-i)==x)
            {
                cout << j << " " << i << endl;
                break;
            }
        }
    }
    return 0;
}