#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<long long>v(n),sum(n+1);
    for(int i=0;i<n;i++)cin >> v[i];
    for(int i=1;i<=n;i++)
    {
        sum[i]=sum[i-1]+v[i-1];
    }
    map<long long,long long>mp;
    long long c=0;
    mp[0]=1;
    for(int i=1;i<=n;i++)
    {
        long long y=sum[i]-k;
        c+=mp[y];
        mp[sum[i]]++;
    }
    cout << c << endl;
    return 0;
}