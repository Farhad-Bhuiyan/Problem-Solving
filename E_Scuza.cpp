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
        long long n,q;
        cin >> n >> q;
        vector<long long>a(n),sum(n);
        long long cm=0,cs=0;
        for(int i=0;i<n;i++)
        {
            long long x;
            cin >> x;
            cm=max(cm,x);
            cs+=x;
            a[i]=cm;
            sum[i]=cs;
        }
        while(q--)
        {
            long long k;
            cin >> k;
            int idx=(upper_bound(a.begin(),a.end(),k)-a.begin())-1;
            cout << (idx<0 ? 0 :sum[idx]) << " ";
        }
        cout << endl;
    }
}