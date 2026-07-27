#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin >> n >> k;
    vector<long long>a(n);
    for(long long &i:a)cin >> i;
    while(k--)
    {
        long long x;
        cin >> x;
        bool fl=false;
        int l=0,r=n-1;
        while(l<=r)
        {
            long long mid=(l+r)/2;
            if(a[mid]==x)
            {
                fl=true;
                break;
            }
            if(a[mid]<x)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(fl)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}