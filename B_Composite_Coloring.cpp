#include <bits/stdc++.h>
using namespace std;
vector<int>prim={2,3,5,7,11,13,17,19,23,29,31};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        vector<int>a(n);
        for(int &i:a)cin >> i;

        map<int,vector<int>>mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<11;j++)
            {
                if(a[i]%prim[j]==0)
                {
                    mp[prim[j]].push_back(i);
                    break;
                }
            }
        }
        vector<int>ans(n);
        int co=1;
        cout << mp.size() << endl;
        for(auto it:mp)
        {
            for(int i:it.second)
            {
                ans[i]=co;
            }
            co++;
        }
        for(int i:ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}