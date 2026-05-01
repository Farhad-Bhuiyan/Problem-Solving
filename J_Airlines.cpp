#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,n;
        cin >> x >> n;
        int r = (x*100);
        if(r>=n)
        {
            cout << 0 << endl;
        }
        else
        {
            int k=n-r;
            cout << ceil(k/100.00) << endl;
        }
    }
    return 0;
}