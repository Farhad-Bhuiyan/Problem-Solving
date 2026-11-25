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
        long long n;
        cin >> n;
        vector<long long>a(n);
        long long mx=0,sum=0,ans=0;
        for(long long &i:a)
        {
            cin >> i;
            mx=max(mx,i);
            sum+=i;
        }
        ans-=mx;
        for(int i=0;i<n;i++)
        {
            long long dm=sum;
            dm-=a[i];
            dm+=2*a[i];
            if((2*a[i])>mx)
            {
                ans=max(ans,dm-(2*a[i]));
            }
            else
            {
                ans=max(ans,dm-mx);
            }
        }
        cout << ans << endl;
    }

    return 0;
}