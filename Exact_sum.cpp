#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        vector<int>v(n);
        multiset<int>s;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }
        int p;
        cin >> p;
        int diff=INT_MAX;
        int l=0,r=0;
        for(int i=0;i<n;i++)
        {
            if(s.find(p-v[i])!=s.end())
            {
                int dem= abs(v[i]-(p-v[i]));
                if(diff>dem)
                {
                    diff=dem;
                    l=min(p-v[i],v[i]);
                    r=max(v[i],p-v[i]);
                }
            }
        }
        cout << "Peter should buy books whose prices are "<<  l << " and " << r << "." << endl;
        cout << endl;
    }
    
    return 0;
}
