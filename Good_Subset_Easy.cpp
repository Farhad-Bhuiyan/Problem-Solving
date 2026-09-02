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
        cin >> n ;
        vector<int>cnt(31,0);
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            int m=31 - __builtin_clz(x);
            cnt[m]++;
        }
        int ans=0;
        for(int i:cnt)
        {
            ans=max(ans,i);
        }  
        cout << ans<< endl;
    }
    return 0;
}