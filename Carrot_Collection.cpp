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
        int n,l,r;
        cin >> n >> l >> r;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++)cin >> a[i];
        long long sum1=0,sum2=0;
        for(int i=1;i<l;i++)sum1+=a[i];
        for(int i=r+1;i<=n;i++)sum2+=a[i];
        cout << max(sum1,sum2) << endl;
    }
    return 0;
}