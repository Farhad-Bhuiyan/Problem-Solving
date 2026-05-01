#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a,b;
        cin >> n >> a >> b;
        int min= INT_MAX;
        while(n--)
        {
            int x,y;
            cin >> x >> y;
            int k=abs(x-a)+abs(y-b);
            if(k<min)
            {
                min=k;
            }
        }
        cout << min << endl;
    }
    return 0;
}