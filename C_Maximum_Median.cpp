#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k;
    cin >> n >> k;
    vector<long long>a(n);
    for(long long &i:a)cin >> i;
    sort(a.begin(),a.end());

    auto ok=[&](long long mid)
    {
        long long op=0;
        for(long long i=n/2;i<n;i++)
        {
            if(a[i]>=mid)
            {
                break;
            }
            op+=(mid-a[i]);
        }
        if(op<=k)
        {
            return true;
        }
        else
        {
            return false;
        }
    };

    long long l=1,r=2e9,ans=0;
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
    return 0;
}