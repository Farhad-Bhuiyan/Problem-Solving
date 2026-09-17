#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(int &i:a)cin >> i;
    auto ok=[&](long long mid)
    {
        long long cow=1;
        long long last=a[0];
        for(int i=1;i<n;i++)
        {
            if(a[i]-last>=mid)
            {
                cow++;
                last=a[i];
            }
            if(cow>=k)
            {
                return true;
            }
        }
        return false;
    };
    long long l=0,rr=a[n-1]-a[0],ans=0;
    while(l<=rr)
    {
        long long mid=(l+rr)/2;
        if(ok(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            rr=mid-1;
        }
    }
    cout << ans << endl;
    return 0;
}