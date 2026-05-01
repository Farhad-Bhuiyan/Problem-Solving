#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    multiset<int>s;
    for(int i=0;i<n;i++)
    {
        int y;
        cin >> y;
        s.insert(y);
    }
    for(int i=0;i<m;i++)
    {
        int z;
        cin >> z;
        auto it=s.upper_bound(z);
        if(it!=s.begin())
        {
            cout << *--it << endl;
            s.erase(it);
        }
        else if(it==s.begin())
        {
            cout << -1 << endl;
        }
    }
    return 0;
}