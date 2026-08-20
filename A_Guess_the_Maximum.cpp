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
        int n;
        cin >> n;
        vector<int>a(n);
        for(int &i:a)cin >> i;
        long long ans=2e9;
        for(int i=1;i<n;i++)
        {
            long long mx=max(a[i-1],a[i]);
            ans=min(mx,ans);
        }
        cout << ans-1 << endl;
    }
    return 0;
}