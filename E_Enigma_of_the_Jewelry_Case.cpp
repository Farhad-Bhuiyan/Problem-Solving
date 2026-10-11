#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<vector< long long>>a(n,vector<long long>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int c1 = 0, ans = 0;
        for (int i = 0; i <= 3; i++)
        {
            bool fl=true;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(j+1<n && a[i][j]>=a[i][j+1])
                    {
                        fl=false;
                    }
                    if(i+1<n && a[i][j]>=a[i+1][j])
                    {
                        fl=false;
                    }
                }
            }
            if(fl)
            {
                cout << i << endl;
                return 0;
            }
            vector<vector< long long>>b(n,vector<long long>(n));
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    b[n-1-j][i]=a[i][j];
                }
            }
            a=b;
        }
        cout << ans << endl;
    }
    return 0;
}