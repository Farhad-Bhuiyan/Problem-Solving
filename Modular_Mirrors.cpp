#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        vector<int>a(n+1);
        int l=1;
        bool fl=true;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 && fl) 
            {
                a[i]=0;
                l=m-1;
                fl=false;
            }
            else if (i%3==0 && !fl)
            {
                a[i]=0;
                l=1;
                fl=true;
            }
            else 
            {
                a[i]=l;
            }
        }
        if(a[n]!=0 && a[n-1]!=0)
        {
            for(int i=1;i<=n;i++)
            {
                cout << a[i] << " " ;
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}