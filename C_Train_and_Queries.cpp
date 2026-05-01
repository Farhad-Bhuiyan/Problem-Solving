#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin.ignore();
        int n,k;
        cin >> n >> k;
        map<int,set<int>>mp;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }
        while(k--)
        {
            int a,b;
            cin >> a >> b;
            if(mp.find(a)==mp.end() || mp.find(b)==mp.end())
            {
                cout << "NO" << endl;
            }
            else
            {
                int ls,rs;
                ls=*mp[a].begin();
                rs=*mp[b].rbegin();
                if(ls<=rs)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}