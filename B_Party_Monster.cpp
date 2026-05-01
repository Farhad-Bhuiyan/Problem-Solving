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
        string x;
        cin >> x;
        map<char,int>mp;
        for(char c:x)
        {
            mp[c]++;
        }
        if(mp['(']==mp[')'])
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