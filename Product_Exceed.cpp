#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int ans=INT_MAX;
        for(int i=0;i<=z;i++)
        {
            for(int j=0;j<=z;j++)
            {
                if(((x+i)*(y+j))>=z)
                {
                    ans=min(ans,i+j);
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}