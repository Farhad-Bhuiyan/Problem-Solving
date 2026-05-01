#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    vector<long long>v(n),s;
    long long x,a,b,c;
    cin >> x >> a >> b >> c;
    v[0]=x;
    for(int i=1;i<n;i++)
    {
        long long el=(a*v[i-1]+b)%c;
        v[i]=el;
    }
    long long sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=v[i];
    }
    s.push_back(sum);
    long long wd=sum;
    for(int i=k;i<n;i++)
    {
        wd=wd-v[i-k]+v[i];
        s.push_back(wd);
    }
    long long x0r=0;
    for(int i=0;i<s.size();i++)
    {
        x0r^=s[i];
    }
    cout << x0r << endl;
    return 0;
}