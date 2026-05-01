#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,y;
        cin >> n >> x >> y;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int co=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]*x>y)
            {
                co+=y;
            }
            else
            {
                co+=a[i]*x;
            }
        }
        cout << co << endl;
    }
    return 0;
}