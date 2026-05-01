#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<pair<int,int>>s;
    multiset<pair<int,int>>ms;
    vector<int>v;
    int i=1;
    for(int k=1;k<=n;k++)
    {
        int ty,m;
        cin >> ty;
        if(ty==1)
        {
            cin >> m;
            s.insert({i,m});
            ms.insert({m,-i});
            i++;
        }
        else if(ty==2)
        {
            int p=s.begin()->first,m=s.begin()->second;
            v.push_back(p);
            s.erase(s.begin());
            ms.erase({m,-p});
        }
        else
        {
            int p=-ms.rbegin()->second,m=ms.rbegin()->first;
            v.push_back(p);
            s.erase({p,m});
            ms.erase(--ms.end());
        }
    }
    for( int a:v)
    {
        cout << a << " ";
    }
    return 0;
}