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
        vector<int>a(n+1);
        for(int i=1;i<=n;i++)cin >> a[i];
        long long ans=0,idx=1;
        for(int i=2;i<=n;i++)
        {
            long long tm=a[i]-i+idx;
            if(tm>=0)
            {
                idx=i;
                ans+=tm;
            }
        }
        cout << ans << endl;
    }
    return 0;
}