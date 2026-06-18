#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>p[1001];
    for(int i=1;i<=1000;i++)
        {
            for(int j=1;j<=1000;j++)
            {
                if(__gcd(i,j)==1)
                {
                    p[i].push_back(j);
                }
            }
        }
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>a(1001,-1);
        for(int i=1;i<=n;i++)
        {
            int x;
            cin >> x;
            a[x]=i;
        }
        int mx=-1;
        for(int i=1;i<=1000;i++)
        {
            if(a[i]!=-1)
            {
                for(auto j:p[i])
                {
                    if(a[j]!=-1)
                    {
                        mx=max(a[i]+a[j],mx);
                    }
                }
            }
        }
        cout << mx << endl;
    }
}