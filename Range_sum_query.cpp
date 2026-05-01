#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q;
    cin >> n >> q;
    vector<long long>v(n+1),sum(n+1);
    for(int i=1;i<n+1;i++)
    {
        cin >> v[i];
        if(i>1)
        {
            sum[i]=v[i]+sum[i-1];
        }
        else
        {
            sum[i]=v[i];
        }
    }
    while(q--)
    {
        long long l,r;
        cin >> l >> r;
        if(l==r)
        {
            cout << v[l] << endl;
        }
        else if(l==1)
        {
            cout << sum[r] << endl;
        }
        else
        {
            cout << sum[r]-sum[l-1] << endl;
        }
    }
    return 0;
}