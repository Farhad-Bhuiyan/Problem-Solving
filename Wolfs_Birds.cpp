#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin >> n;
        char x[n+1];
        int c1=0,c0=0;
        for(int i=0;i<n;i++)
        {
            cin >> x[i];
            if(x[i]=='0')
            {
                c0++;
            }
            else
            {
                c1++;
            }
        }
        if(c1==n)
        {
            cout << 0 << endl;
            continue;
        }
        else if(c0==n)
        {
            cout << n << endl;
            continue;
        }
        else
        {
            int coun=0;
            for(int i=0;i<n-1;i++)
            {
                if(x[i]=='1'&& x[i+1]=='0')
                {
                    c0--;
                    x[i+1]='1';
                }
            }
            cout << c0 << endl;
        }
    }
    return 0;
}