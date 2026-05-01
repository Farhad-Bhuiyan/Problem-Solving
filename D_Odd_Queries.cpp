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
        vector<int>v(n),sum(n+1);
        for(int i=0;i<n;i++)cin >> v[i];
        for(int i=1;i<=n;i++)sum[i]=sum[i-1]+v[i-1];
        while(q--)
        {
            int a,b,c;
            cin >> a >> b >> c;
            int d=b-a+1;
            if(a==1)
            {
                int k=sum[n]-sum[b];
                int ans=(d*c)+k;
                if(ans&1)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                int k=sum[b]-sum[a-1];
                int ans=(d*c)+(sum[n]-k);
                if(ans&1)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}