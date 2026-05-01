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
        priority_queue<int>pq;
        long long an=0;
        while(n--)
        {
            int x;
            cin >> x;
            if(x==0 && !pq.empty())
            {
                an+=pq.top();
                pq.pop();
            }
            if(x!=0)
            pq.push(x);
        }
        cout << an << endl;
    }
    return 0;
}