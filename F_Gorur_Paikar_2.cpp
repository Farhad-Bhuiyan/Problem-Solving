#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin >> n >> x;
    vector<long long>val;
    while(n--)
    {
        long long i,j;
        cin >> i >> j;
        if(j-i>=0)
        {
            val.push_back(j-i);
        }
    }
    sort(val.begin(),val.end(),greater<long long>());
    long long ans=0;
    for(int j=0;j<val.size() && j<x ;j++)
    {
        ans+=val[j];
    }
    cout << ans << endl;
    return 0;
}