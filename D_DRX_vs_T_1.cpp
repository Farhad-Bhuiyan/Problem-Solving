#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while(t--)
    {
        string x;
        cin >> x;
        map<char,long long>mp;
        for(char c:x)
        {
            if(c=='?')break;

            mp[c]++;
        }
        if(mp['T']>mp['D'])
        {
            cout << "T1" << endl;
        }
        else
        {
            cout << "DRX" << endl;
        }

    }
    return 0;
}