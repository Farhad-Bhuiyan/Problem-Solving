#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        map<int,int>mp;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        for(int s=2;s<=2*n;s++)
        {
            int co=0;
            for(auto a:mp)
            {
                int y=s-a.first;
                if(mp.find(y)!=mp.end())
                {
                    co+=min(a.second,mp[y]);
                }
            }
            co/=2;
            ans=max(co,ans);
        }
        cout << ans << endl;
    }
    return 0;
}