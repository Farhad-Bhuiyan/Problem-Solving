#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a,b;
    cin >>  n >> a >> b;
    long long mn=min(a,b);
    auto ok=[&](int mid)
    {
        long long to=0;
        to+=mid/a;
        to+=mid/b;
        if(to>=n-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    };
    long long l=0,r=2e9,ans=0;
    while(l<=r)
    {
        long long mid=(l+r)/2;
        if(ok(mid))
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout << ans+mn << endl;
    return 0;
}