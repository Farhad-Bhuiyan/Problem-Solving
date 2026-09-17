#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string x;
    cin >> x;
    long long nb,ns,nc,rb,rs,rc,r;
    cin >> nb >> ns >> nc;
    cin >> rb >> rs >> rc;
    cin >> r;
    unordered_map<char,int>m;
    for(char c:x)
    {
        m[c]++;
    }
    auto ok=[&](long long mid)
    {
        long long b=mid*m['B'];
        long long s=mid*m['S'];
        long long c=mid*m['C'];

        long long bb=max(0LL,b-nb);
        long long ss=max(0LL,s-ns);
        long long cc=max(0LL,c-nc);

        long long to=(bb*rb)+(ss*rs)+(cc*rc);
        return to<=r;
    };
    long long l=0,rr=1e13,ans=0;
    while(l<=rr)
    {
        long long mid=(l+rr)/2;
        if(ok(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            rr=mid-1;
        }
    }
    cout << ans << endl;
    return 0;
}