#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        string x;
        cin >> x;
        map<char,int>mp;
        for(char c:x)
        {
            mp[c]++;
        }
        int b=(n/2)-k;
        if(mp['0']<b || mp['1']<b)
        {
            cout << "NO" << endl;
            continue;
        }
        mp['0']-=b;
        mp['1']-=b;
        if(mp['0']%2==0 && mp['1']%2==0)
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