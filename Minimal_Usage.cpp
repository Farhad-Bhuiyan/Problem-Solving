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
        long long n,k,s,m;
        cin >> n >> k >> s >> m;
        
        if(1<m && m<n)
        {
            bool fl=false;
            for(int x=0;x<=k;x++)
            {
                long long y=k-x;
                long long lo=x*1+y*(m+1);
                long long hi=x*(m-1)+y*n;
                if(lo<=s && s<=hi)
                {
                    fl=true;
                    break;
                }
            }
            if(fl)cout << 0 << endl;
            else cout << 1 << endl;
        }
        else if(m==1)
        {
            for(int x=0;x<=k;x++)
            {
                long long y=k-x;
                long long lo=2*y;
                long long hi=y*n;
                long long rl=s-x*1;
                if(lo<=rl && rl<=hi)
                {
                    cout << x << endl;
                    break;
                }
            }
        }
        else if(m==n)
        {
            for(int x=0;x<=k;x++)
            {
                long long y=k-x;
                long long lo=1*y;
                long long hi=y*(n-1);
                long long rl=s-x*n;
                if(lo<=rl && rl<=hi)
                {
                    cout << x << endl;
                    break;
                }
            }
        }
    }
    return 0;
}