#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    map<string,int>mp;
    while(t--)
    {
        string x;
        cin >> x;
        if(mp.find(x)==mp.end())
        {
            cout << "OK" << endl;
            mp[x]++;
        }
        else
        {
            cout << x << mp[x] << endl;
            mp[x]++;
        }
    }
    return 0;
}