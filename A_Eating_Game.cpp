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
        map<int,int>mp;
        int m=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            if(m<x)
            {
                m=x;
            }
        }
        cout << mp[m] <<endl;
    }
    return 0;
}