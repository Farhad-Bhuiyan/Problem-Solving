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
        deque<int> q;
        map<int, int> m;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            q.push_back(x);
            v.push_back(x);
            m[x]++;
        }
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (m[v[i]] > 1)
            {
                q.pop_front();
                m[v[i]]--;
                if (c > 0)
                {
                    while (c != 0)
                    {
                        q.pop_front();
                        c--;
                    }
                }
            }
            else
            {
                c++;
            }
        }
        cout << n - q.size() << endl;
    }
    return 0;
}