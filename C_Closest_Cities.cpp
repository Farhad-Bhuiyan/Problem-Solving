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
        long long n;
        cin >> n;
        vector<long long>a(n),lr(n),rl(n);
        for(long long &i:a)cin >> i;
        lr[0]=0;
        for(int i=0;i<n-1;i++)
        {
            long long c=0;
            if(i==0)
            {
                c=1;
            }
            else
            {
                long long lf=a[i]-a[i-1];
                long long rt=a[i+1]-a[i];
                if(rt<lf)
                {
                    c=1;
                }
                else
                {
                    c=rt;
                }
            }
            lr[i+1]=lr[i]+c;
        }
        rl[n-1]=0;
        for(int i=n-1;i>0;i--)
        {
            long long c=0;
            if(i==n-1)
            {
                c=1;
            }
            else
            {
                long long lf=a[i]-a[i-1];
                long long rt=a[i+1]-a[i];
                if(rt>lf)
                {
                    c=1;
                }
                else
                {
                    c=lf;
                }
            }
            rl[i-1]=rl[i]+c;
        }
        long long m;
        cin >> m;
        while(m--)
        {
            long long l,r;
            cin >> l >> r;
            l--,r--;
            if(l<r)
            {
                cout << lr[r]-lr[l] << endl;
            }
            else
            {
                cout << rl[r]-rl[l] << endl;
            }
        }
    }
    return 0;
}