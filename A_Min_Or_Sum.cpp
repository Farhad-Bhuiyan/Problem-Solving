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
        long long ans=0;
        while(n--)
        {
            int x;
            cin >> x;
            ans|=x;
        }
        cout << ans << endl;
    }
    return 0;
}