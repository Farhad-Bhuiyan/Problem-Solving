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
        long long n,k;
        cin >> n >> k;
        long long ans=0,cnt=0;
        vector<long long>a(n);
        for(long long &i:a)
        {
            cin >> i;
        }
        sort(a.rbegin(),a.rend());
        for(long long i=0;i<n;i++)
        {
            cnt++;
            if(k<=(cnt*a[i]))
            {
                ans++;
                cnt=0;
            }
        }
        cout << ans << endl;
    }
}