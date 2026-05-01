#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int co=0,tem=0,v=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==a[i+1])
        {
            tem++;
        }
        else
        {
            tem++;
            if(tem>co)
            {
                co=tem;
                v=a[i];
            }
            tem=0;
        }
    }
    cout << v << " " << co << endl; 
}