#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        multiset<int>v;
        vector<pair<int,int>>v2;
        for(int i=1;i<=n;i++)
        {
            v.insert(i);
        }
        while(v.size()>1)
        {
            int l=*--v.end();
            v.erase(--v.end());
            int r=*--v.end();
            v.erase(--v.end());
            v2.push_back({l,r});
            v.insert(round((l+r)/2.0));
        }
        cout << *v.begin() << endl;
        for(pair<int,int> d:v2)
        {
            cout << d.first << " " << d.second << endl;
        }
    }
    return 0;
}