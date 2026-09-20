#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin >> n >> k;
    vector<long long>v(n);
    long long x,a,b,c;
    cin >> x >> a >> b >> c;
    v[0]=x;
    for(int i=1;i<n;i++)
    {
        long long el=(a*v[i-1]+b)%c;
        v[i]=el;
    }
    deque<long long>dq;
    dq.push_back(0);
    for(int i=1;i<k;i++)
    {
        while(!dq.empty() && v[i]<=v[dq.back()])dq.pop_back();
        dq.push_back(i);
    }
    long long ans=0;
    ans^=v[dq.front()];
    for(int i=k;i<n;i++)
    {
        while(!dq.empty() && dq.front()<= i-k)dq.pop_front();

        while(!dq.empty() && v[i]<= v[dq.back()])dq.pop_back();
        dq.push_back(i);

        ans^=v[dq.front()];
    }
    cout << ans << endl;
    return 0;
}