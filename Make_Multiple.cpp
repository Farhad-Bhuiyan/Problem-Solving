#include<bits/stdc++.h>
using namespace std;
int BFS(int n)
{
    queue<pair<int,int>>q;
    unordered_set<int>vis;
    q.push({n,0});
    vis.insert(n);
    while(!q.empty())
    {
        pair<int,int>p=q.front();
        q.pop();
        if(p.first%3==0)
        {
            return p.second;
        }
        int o1=p.first+1;
        if(vis.find(o1)==vis.end())
        {
            vis.insert(o1);
            q.push({o1,p.second+1});
        }
        int o2=((p.first/5)+1)*5;
        if(vis.find(o2)==vis.end())
        {
            vis.insert(o2);
            q.push({o2,p.second+1});
        }
    }
}
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
        cout << BFS(n) << endl;
    }
    return 0;
}