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
        long long n;
        cin >> n;
        vector<long long>a(n);
        long long to=0;
        for(long long &i:a)
        {
            cin >> i;
            to+=i;
        }
        sort(a.rbegin(),a.rend());
        long long rs=0,ans=0;
        for(int rc=1;rc<=n/2;rc++)
        {
            rs+=a[rc-1];
            long long bs=to-rs;
            long long bc=n-rc;
            long long vl=rs*bc + bs*rc;
            ans=max(ans,vl);
        }
        cout << ans << endl;
    }
    return 0;
}