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
        long long n;
        cin >> n;
        vector<long long>a(n);
        for(long long &i:a)cin >> i;
        sort(a.begin(),a.end());
        long long mn=a[0];
        vector<long long>m;
        for(long long i=1;i<n;i++)
        {
            if(a[i]%mn==0)m.push_back(a[i]);
        }
        bool fl=false;
        long long gc=0;
        for(long long i=0;i<m.size();i++)
        {
            gc=__gcd(gc,m[i]);
            if(gc==mn)
            {
                fl=true;
                break;
            }
        }
        if(fl)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}