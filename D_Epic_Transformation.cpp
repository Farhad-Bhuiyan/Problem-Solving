#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin  >> n;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        priority_queue<int>pq;
        for(auto i:m)
        {
            pq.push(i.second);
        }
        while(!pq.empty())
        {
            if(pq.size()<2)
            {
                break;
            }
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            a--,b--;
            if(a>0)
            {
                pq.push(a);
            }
            if(b>0)
            {
                pq.push(b);
            }
        }
        int ans=0;
        while(!pq.empty())
        {
            ans+=pq.top();
            pq.pop();
        }
        cout << ans << endl;
    }
    
    return 0;
}