#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    long long ans = 0;
    long long l = 0, r = n - 1;
    long long sum1 = 0, sum2 = 0;
    while (l<=r)
    {
        if (sum1 < sum2)
        {
            sum1 += v[l++];
        }
        else if (sum1 > sum2)
        {
            sum2 += v[r--];
        }
        if (sum1 == sum2)
        {
            ans = sum1;
            sum2+=v[r--];
        }
    }
    cout << ans << endl;
    return 0;
}