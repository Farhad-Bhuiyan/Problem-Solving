#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(26,0);
    string x;
    cin >> x;
    for(char a:x)
    {
        v[a-'a']++;
    }
    bool tr=false;
    for(char a:x)
    {
        if(v[a-'a']==1)
        {
            cout << a << endl;
            tr=true;
            return 0;
        }
    }
    if(!tr)
    {
        cout << -1 << endl;
    }
    return 0;
}