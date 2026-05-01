#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        string s,x;
        cin >> s >> x;
        string d;
        for(int k=0;k<s.size();k++)
        {
            d.clear();
            for(int j=0;j<x.size() && j+k < s.size();j++)
            {
                d+=s[k+j];
            }
            if(d==x)
            {
                cout << "#";
                k+=x.size()-2;
            }
            else
            {
                cout << s[k] ;
            }
        }
    }
    return 0;
}