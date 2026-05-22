#include<bits/stdc++.h>
using namespace std;
const int B=30;
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
        vector<int>a(n);
        vector<int>val(31);
        for(int &i:a)cin >> i;
        for(int i=0;i<n;i++)
        {
            for(int j=B;j>=0;j--)
            {
                if((a[i]>>j)&1)
                {
                    val[j]++;
                }
            }
        }
        int ans=0;
        for(int i=B;i>=0;i--)
        {
            if(val[i]==n)
            {
                ans+=(1 << i);
            }
            else
            {
                int ned=n-val[i];
                if(k>=ned)
                {
                    ans+=(1 << i);
                    k-=ned;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}