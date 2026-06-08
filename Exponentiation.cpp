#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b;
        cin >> a >> b;
        long long ans = 1;
        while(b)
        {
            if(b&1)
            {
                ans=(ans%mod * a%mod)%mod;
            }
            a=a*a%mod;
            b>>=1;
        }
        cout << ans << endl;
    }
    return 0;
}