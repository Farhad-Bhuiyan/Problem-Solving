#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long>v(n),sum(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    sum[0]=v[0];
    for(int i=1;i<n;i++)
    {
        sum[i]=v[i]+sum[i-1];
    }
    long long cou=0;
    for(int i=0;i<n-1;i++)
    {
        long long s1=sum[i];
        long long s2=sum[n-1]-sum[i];
        if(s1==s2)
        {
            cou++;
        }
    }
    cout << cou << endl;
    return 0;
}