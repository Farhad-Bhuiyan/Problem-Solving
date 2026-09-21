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
        cin >> n ;
        vector<long long>a(n);
        for(int i=0;i<n;i++)
        {
            long long x;
            cin >> x;
            a[i]=x-(i+1);
        }
        sort(a.begin(),a.end());
        long long ans=1,cnt=1;
        for(int i=1;i<n;i++)
        {
            if(a[i]==a[i-1])
            {
                continue;
            }
            if(a[i]==a[i-1]+1)
            {
                cnt++;
            }
            else
            {
                cnt=1;
            }
            ans=max(ans,cnt);
        }
        cout << ans << endl;
    }
    return 0;
}