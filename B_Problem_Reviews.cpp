#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        bool f=true;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            if(x<=4)
            {
               f=false;
            }
        }
        if(f)
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