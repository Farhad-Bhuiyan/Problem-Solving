#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        long long n,m,k;
        cin >> n >> m >> k;
        vector<bool>fl(n+1,false);
        for(int i=1;i<=m;i++)
        {
            long long x;
            cin >> x;
            fl[x]=true;
        }
        long long c=0;
        for(int i=1;i<=n;i++)
        {
            
            if(c==k)break;
            if(!fl[i])
            {
                c++;
                cout << i << " " ;
            }
        }
        cout << endl;
    }
    return 0;
}