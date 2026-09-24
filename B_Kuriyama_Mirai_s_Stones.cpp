#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    vector<long long>a(n),b(n),s1(n),s2(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        b[i]=a[i];
    }
    long long q;
    cin >> q;
    sort(b.begin(),b.end());
    s1[0]=a[0];
    s2[0]=b[0];
    for(int i=1;i<n;i++)
    {
        s1[i]=s1[i-1]+a[i];
        s2[i]=s2[i-1]+b[i];
    }
    while(q--)
    {
        long long k,l,r;
        cin >> k >> l >> r;
        if(k==1)
        {
            if(l==1)
            {
                cout << s1[r-1] << endl;
            }
            else
            {
                cout << s1[r-1]-s1[l-2] << endl;
            }
        }
        else
        {
            if(l==1)
            {
                cout << s2[r-1] << endl;
            }
            else
            {
                cout << s2[r-1]-s2[l-2] << endl;
            }
        }
    }
    return 0;
}