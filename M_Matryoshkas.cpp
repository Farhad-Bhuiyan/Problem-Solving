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
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        int co = 0;
        for(auto i=m.begin();i!=m.end();)
        {
            int key = i->first;
            int d = key;
            if (m[key] != 0)
            {
                m[key]--;
            }
            else
            {
                ++i;
                continue;
            }
            while (1)
            {
                d++;
                if (m[d]>0)
                {
                    m[d]--;
                    if (m[d] == 0)
                    {
                        m.erase(d);
                    }
                }
                else
                {
                    co++;
                    break;
                }
            }
        }
        cout << co << endl;
    }
    return 0;
}