#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,d;
        cin >> n >> d;
        int a[n];
        int cou=0,flag=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]<=d && flag==0)
            {
                flag=0;
            }
            else if(a[i] <=d && flag==1)
            {
                flag=0;
                cou++;
            }
            else if(a[i]>d && flag==1)
            {
                flag=1;
            }
            else if(a[i] > d && flag==0)
            {
                cou++;
                flag=1;
            }
        }
        cout << cou << endl;
    }
    return 0;
}