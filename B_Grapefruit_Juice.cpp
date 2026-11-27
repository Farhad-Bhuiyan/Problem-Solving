#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
    {
        long long n,k,p;
        cin >> n >> k >> p;
        vector<long long>f(n);
        for(long long i=0;i<n;i++)cin >> f[i];
        sort(f.begin(),f.end());
        long long sum=0,ans=0;
        for(long long i=0;i<n;i++)
        {
            sum+=f[i];
            if((i+1)%k==0)
            {
                if(sum>=p)ans+=sum,sum=0;
                else ans+=p,sum=0;
            }
        }
        if(sum>0)ans+=sum;
        cout << ans << endl;
    }

    return 0;
}