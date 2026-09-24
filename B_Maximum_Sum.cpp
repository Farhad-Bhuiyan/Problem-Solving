#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n,k;
        cin >> n >> k;
        vector<long long>a(n),sum(n);
        for(long long &i:a)cin >> i;
        sort(a.begin(),a.end());
        sum[0]=a[0];
        for(int i=1;i<n;i++)
        {
            sum[i]=sum[i-1]+a[i];
        }
        long long ans=0;
        for(int i=0;i<=k;i++)
        {
            long long a1=0,a2=0,to=0;
            if((i*2)>0)
            a1=sum[(i*2)-1];
            if((k-i)>0)
            a2=sum[n-1]-sum[n-(k-i)-1];
            to=sum[n-1]-a1-a2;
            ans=max(ans,to);
        }
        cout << ans << endl;
    }
    return 0;
}