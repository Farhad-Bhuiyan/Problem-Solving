#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long>v(n),sum(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        if(i==0)
        {
            sum[i]=v[i];
        }
        else
        {
            sum[i]=v[i]+sum[i-1];
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        cout << sum[i] << " " ;
    }
    return 0;
}