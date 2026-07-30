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
        int n,q;
        cin >> n >> q;
        vector<int>a(n),sum(n);
        for(int &i:a)cin >> i;
        sort(a.rbegin(),a.rend());
        sum[0]=a[0];
        for(int i=1;i<n;i++)sum[i]=sum[i-1]+a[i];
        while(q--)
        {
            int k,ans=0;
            cin >> k;
            int l=0,r=n-1;
            if(sum[n-1]<k)
            {
                cout << -1 << endl;
                continue;
            }
            while(l<=r)
            {
                int mid=(l+r)/2;
                if(sum[mid]>=k)
                {
                    ans=mid+1;
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}