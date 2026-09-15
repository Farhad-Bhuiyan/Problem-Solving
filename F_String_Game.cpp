#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string t,p;
    cin >> t;
    cin >> p;
    int n = t.size(),m=p.size();
    vector<int>a(n);
    for(int &i:a)cin >> i;


    auto ok=[&](long long mid)
    {
        vector<bool>fl(n+1);
        for(int i=0;i<mid;i++)
        {
            fl[a[i]]=true;
        }
        int j=0;
        bool fd=false;
        for(int i=0;i<n;i++)
        {
            if(t[i]==p[j] && !fl[i+1])
            {
                j++;
            }
            if(j==m)
            {
                fd=true;
                break;
            }
        }
        return fd;
    };

    long long l=0,r=n,ans=0;
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