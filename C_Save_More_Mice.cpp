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
        long long n,k;
        cin >> n >> k;
        vector<long long>a(k);
        for(long long &i:a)cin >> i;
        sort(a.rbegin(),a.rend());
        auto ok=[&](long long mid)
        {
            long long to=0;
            for(long long i=0;i<mid;i++)
            {
                to+=(n-a[i]);
            }
            return to<n;
        };
        long long l=0,r=k,ans=0;
        while(l<=r)
        {
            long long mid=(l+r)/2;
            if(ok(mid))
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout << ans << endl;
    }
}