#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>p(n);
        vector<int>m(n);
        priority_queue<int>pq;
        for(int i=0;i<n;i++)
        {
            cin >> p[i];
        }
        for(int i=0;i<n;i++)
        {
            cin >> m[i];
            pq.push(m[i]);
        }
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[m[i]]=p[i];
        }
        int c=0,l=0;
        bool f=true;

        while(c!=2 && !pq.empty())
        {
            if(mp[pq.top()]/2<=k && f)
            {
                k-=mp[pq.top()]/2;
                l+=pq.top();
                pq.pop();
                c++;
                f=false;
            }
            else if(mp[pq.top()]/2 >k && k>=100 && f)
            {
                k-=100;
                c++;
                l+=pq.top();
                pq.pop();
                f=false;
            }
            else if(mp[pq.top()]<=k && !f)
            {
                k-=mp[pq.top()];
                l+=pq.top();
                c++;
                pq.pop();
            }
            else
            {
                pq.pop();
            }
        }
        if(c<2)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << l  << endl;
        }
    }
}