#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>c(n+1);
        for(int i=1;i<=n;i++)
        {
            cin >> c[i];
        }
        int ans=INT_MAX;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(i-k<=1 && j+k>=n && j-i<=2*k+1)
                {
                    ans=min(ans,c[i]+c[j]);
                }
            }
        }
        if(ans==INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}