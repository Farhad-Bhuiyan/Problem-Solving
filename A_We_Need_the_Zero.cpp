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
        int n;
        cin >> n;
        if(n&1)
        {
            long long ans=0;
            while(n--)
            {
                int x;
                cin >> x;
                ans^=x;
            }
            cout << ans << endl;
        }
        else
        {
            long long ans=0;
            while(n--)
            {
                int x;
                cin >> x;
                ans^=x;
            }
            if(ans==0)cout << ans << endl;
            else cout << -1 << endl;
        }
    }
    return 0;
}