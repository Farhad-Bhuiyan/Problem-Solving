#include <bits/stdc++.h>
using namespace std;
long long mx=30;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> cnt(mx);
        for(int i=0;i<n;i++)
        {
            long long x;
            cin >> x;
            cnt[__lg(x)]++;
        }
        long long ans=0;
        for(int i=0;i<mx;i++)
        {
            ans+=(cnt[i]*(cnt[i]-1))/2;
        }
        cout << ans << endl;
    }

    return 0;
}