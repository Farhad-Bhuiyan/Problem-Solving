#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,q;
        cin >> n >> m >> q;
        vector<int>v(m);
        for(int i=0;i<m;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        while(q--)
        {
            int d;
            cin >> d;
            auto it=upper_bound(v.begin(),v.end(),d);
            if(it==v.end())
            {
                it--;
                cout << n-*it << endl;
            }
            else if(it==v.begin())
            {
                cout << *it-1 << endl;
            }
            else
            {
                int rt=*it;
                --it;
                int lt=*it;
                int le=rt-lt-1;
                cout << (le+1)/2 << endl; 
            }
        }
    }
    return 0;
}