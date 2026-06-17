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
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        if(mp[0]%2!=0)cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}