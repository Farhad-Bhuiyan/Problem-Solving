#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
    {
        long long n,m,k;
        cin >> n >> m >> k;
        vector<long long>p(m+2);
        for(int i=1;i<=m+1;i++)
        {
            cin >> p[i];
        }
        vector<long long>d(m+1);
        for(int i=1;i<=m;i++)
        {
            d[i]=(p[i]^p[m+1]);
        }
        long long c=0;
        for(int i=1;i<=m;i++)
        {
            long long dif=__builtin_popcount(d[i]);
            if(dif<=k)c++;
        }
        cout << c << endl;
    }

    return 0;
}