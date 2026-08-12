#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        priority_queue<int>pq;

        long long ans=0,sum=0;
        vector<int>ev,od;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin >> x;
            pq.push(x);
            sum+=x;
        }
        while(!pq.empty())
        {
            int y=pq.top();
            pq.pop();
            bool fl = (sum%2==0);
            if(y>1)
            {
                int e;
                if(y&1)
                {
                    e=y-1;
                    y=1;
                }
                else
                {
                    e=y;
                    y=0;
                }
                if(fl)
                {
                    ans+=e;
                }
                sum-=e;
                if(y>0)
                {
                    pq.push(y);
                }
            }
            else
            {
                if(fl)ans++;

                sum--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}