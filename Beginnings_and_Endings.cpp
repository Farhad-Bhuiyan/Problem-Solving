#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>a(n+1);
        map<int,vector<int>>mv;
        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
            mv[a[i]].push_back(i);
        }
        int cnt=0;
        int to=INT_MAX;
        for(auto m:mv)
        {
            if(m.second.size()<2)
            {
                cnt++;
                continue;
            }
            else
            {
                to=min((m.second[0]-1 )+(n-m.second[m.second.size()-1]),to);
            }
        }
        if(cnt==n)
        cout << -1 << endl;
        else
        {
            cout << to << endl;
        }
    }
    return 0;
}
