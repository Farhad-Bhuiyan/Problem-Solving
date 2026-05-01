#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<pair<string,string>,bool>mp;
    while(n--)
    {
        string x,y;
        cin >> x >> y;
        mp[{x,y}]=true;
    }
    cout << mp.size() << endl;
    return 0;
}