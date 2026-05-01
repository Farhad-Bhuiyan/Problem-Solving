#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int,int>mp;
    while(n--)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    cout << abs(mp[-1]-mp[1]) << endl;
    return 0;
}