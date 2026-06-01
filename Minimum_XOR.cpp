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
        long long xr1=0;
        for(int &i:a)
        {
            cin >> i;
            xr1^=i;
        }
        long long ans=xr1;
        for(int i:a)
        {
            ans=min(ans,xr1^i);
           
        }
        cout << ans << endl;
    }
    return 0;
}