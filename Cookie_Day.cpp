#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int con = INT_MAX, flag = 1,flag2=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]<k&&flag==1)
            {
                flag2=1;
            }
            else
            {
                flag=0;
            }
        }
        if (flag)
        {
            cout << "-1" << endl;
            continue;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i]>=k && (a[i] % k) < con)
                {
                    con = a[i] % k;
                }
            }
        }
        cout << con << endl;
    }
    return 0;
}