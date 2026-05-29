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
        vector<int>a(n+1);
        for(int &i:a)cin >> i;
        int ans=INT_MAX;
        for(int i=1;i<=n;i++)
        {
            if(max(a[i],a[i-1])<ans)ans=max(a[i],a[i-1]);
        }
        cout << ans << endl;
    }
    return 0;
}