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
        int n,k;
        cin >> n >> k;
        vector<int>v(n),g(n);
        for(int &i:g) cin >> i;
        for(int &i:v) cin >> i;
        
        if(n==1)
        {
            if(g[0]<=k) cout << 1 << endl;
            else cout << 0 << endl;
            continue;
        }
        int l=0,r=1,len=0;
        long long sum=g[0];
        if(sum<=k) len=1;
        while(r<n)
        {
            if(v[r-1]%v[r]==0)sum+=g[r];
            else
            {
                l=r;
                sum=g[r];
                if(sum<=k)
                {
                    len=max(len,1);
                }
                r++;
                continue;
            }

            while(l<=r && sum>k)
            {
                sum-=g[l];
                l++;
            }
            len=max(len,r-l+1);
            r++;
        }
        cout << len << endl;
    }
    return 0;
}