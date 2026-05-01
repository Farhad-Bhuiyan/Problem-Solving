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
        vector<int>v(n),ne;
        string x;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        cin >> x;
        for(int i=0;i<n;i++)
        {
           if(x[i]=='0')
           {
             ne.push_back(v[i]);
           }
        }
        if(ne.size()<k)
        {
           cout << -1 << endl;
        }
        else
        {
           int s=0;
           sort(ne.begin(),ne.end());
           for(int i=0;i<k;i++)
           {
              s+=ne[i];
           }
           cout << s << endl;
        }
    }
    return 0;
}