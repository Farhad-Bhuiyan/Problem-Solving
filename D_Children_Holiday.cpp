#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int m,n;
    cin >> m >> n;
    vector<int>t(n),z(n),y(n);
    for(int i=0;i<n;i++)
    {
        cin >> t[i] >> z[i] >> y[i];
    }
    vector<int>can(n);
    auto ok=[&](long long mid)
    {
        vector<int>may(n);
        int has=m;
        for(int i=0;i<n;i++)
        {
            int tot,cn,rm,cur;
            tot=((t[i]*z[i])+y[i]);
            cn=mid/tot;
            rm=mid%tot;
            cur=((cn*z[i])+min(z[i],(rm/t[i])));
            cur=min(cur,has);
            has-=cur;
            may[i]=cur;
        }
        if(!has)
        {
            for(int i=0;i<n;i++)
            {
                can[i]=may[i];
            }
        }
        return (!has);
    };

    long long l=0,r=1e8,ans=0;
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
    cout << ans << endl;
    for(int i:can)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}