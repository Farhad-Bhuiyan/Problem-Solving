#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    map<int, int> mp;
    priority_queue<pair<int, int>> pq;
    while (t--)
    {
        int ty;
        cin >> ty;
        if (ty == 1)
        {
            int x;
            cin >> x;
            mp[x]++;
            pq.push({mp[x],x});
        }
        else
        {
            if(mp.empty())
            {
                cout << "empty" << endl;
            }
            else
            {
                while(!pq.empty())
                {
                    pair<int,int> p=pq.top();
                    if(mp.find(p.second)!=mp.end() && mp[p.second]==p.first)
                    {
                        cout << p.second << endl;
                        mp.erase(p.second);
                        pq.pop();
                        break;
                    }
                    else
                    {
                        pq.pop();
                    }
                }
            }
        }
    }
    return 0;
}