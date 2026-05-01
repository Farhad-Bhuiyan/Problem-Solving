#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>v(n);
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            m[v[i]]++;
        }
        m.erase(v[0]);
        vector<pair<int,int>>v2;
        for( auto a:m)
        {
            v2.push_back({a.second,a.first});
        }
        sort(v2.begin(),v2.end());
        for( pair<int,int>a:v2)
        {
            int mn=min(a.first,k);
            m[a.second]-=mn;
            if(m[a.second]==0)
            {
                m.erase(a.second);
            }
            k-=mn;
            if(k==0)break;
        }
        cout << m.size()+1 << endl;
    }
    return 0;
}