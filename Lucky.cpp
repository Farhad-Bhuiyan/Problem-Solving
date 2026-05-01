#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string x;
        cin >> x;
        int l=0,r=0;
        for(int i=0;i<x.size();i++)
        {
            if(i<=2)
            {
                l+=x[i]-'0';
            }
            else
            {
                r+=x[i]-'0';
            }
        }
        if(l==r)
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