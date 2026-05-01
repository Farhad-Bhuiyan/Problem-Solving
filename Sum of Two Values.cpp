#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n >> x;
    vector<int> v(n);
    map<int,deque<int>>mp;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        mp[v[i]].push_back(i);
        
    }
    sort(v.begin(),v.end());
    int l=0,r=n-1;
    while(l<r)
    {
        if(v[l]+v[r]==x)
        {
            int lb=mp[v[l]].front();
            mp[v[l]].pop_front();
            int rb=mp[v[r]].front();
            mp[v[r]].pop_front();
            cout << lb+1 << " " << rb+1 << endl;
            return 0;
        }
        else if(v[l]+v[r] > x)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}