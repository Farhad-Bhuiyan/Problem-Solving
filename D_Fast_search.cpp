#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> n;
    vector<long long> a(n);
    for (long long &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    cin >> t;
    while (t--)
    {
        long long v1, v2;
        cin >> v1 >> v2;
        cout << upper_bound(a.begin(),a.end(),v2) - lower_bound(a.begin(),a.end(),v1) << " " ;
    }
    return 0;
}

