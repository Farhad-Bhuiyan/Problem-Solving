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
        deque<int>q;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            if(q.empty())
            {
                q.push_back(x);
            }
            else
            {
                if(q.front()<x)
                {
                    q.push_back(x);
                }
                else
                {
                    q.push_front(x);
                }
            }
        }
        while(!q.empty())
        {
            cout << q.front() << " ";
            q.pop_front();
        }
        cout << endl;
    }
    return 0;
}