#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        long long N = 100000;
        vector<long long> fr(N + 1);
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            fr[x]++;
        }
        long long ans = 1;
        for (int i = 2; i <= N; i++)
        {
            long long c = 0;
            for (int j = i; j <= N; j += i)
            {
                c += fr[j];
            }
            ans=max(ans,c);
        }
        cout << ans << endl;
    }

    return 0;
}