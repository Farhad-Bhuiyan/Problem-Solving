#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin >> n >> q;
    vector<long long>v(n+1),s;
    long long sum=0;
    s.push_back(0);
    for(int i=1;i<=n;i++)
    {
        cin >> v[i];
        sum+=v[i];
        s.push_back(sum);
    }
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        if(l==1)
        {
            cout << s[r] << endl;
        }
        else if(l<r)
        {
            cout << s[r]-s[l-1] << endl;
        }
        else if(l==r)
        {
            cout << v[l] << endl;
        }
    }
    return 0;
}