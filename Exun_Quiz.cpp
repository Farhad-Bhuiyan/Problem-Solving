#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
    {
        long long n,s;
        cin >> n >> s;

        long long ans=INT_MAX;
        for(int i=0;i<=n;i++)
        {
            for(int j=0;i+j<=n;j++)
            {
                long long ss=4*i - j;
                if(ss==s)
                {
                    ans=min(ans,(long long)i+j);
                }
            }
        }
        if(ans==INT_MAX)cout << -1 << endl;
        else cout << ans << endl;
    }

    return 0;
}