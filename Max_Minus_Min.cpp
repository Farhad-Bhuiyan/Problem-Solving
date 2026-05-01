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
        vector<int>v(n);
        int m=INT_MIN,idx=0;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            if(m<v[i])
            {
                m=v[i];
                idx=i;
            }
        }
        for(int i=0;i<n;i++)
        {
           while(v[i]*2 < v[idx])
           {
             v[i]=v[i]*2;
           }
        }
        sort(v.begin(),v.end());
        int ans=v[n-1]-v[0];
        for(int i=0;i<n-1;i++)
        {
            int mx=v[i]*2;
            int mn=v[i+1];
            ans=min(ans,mx-mn);
        }
        cout << ans << endl;
    }
    return 0;
}