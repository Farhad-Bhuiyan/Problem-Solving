#include<bits/stdc++.h>
using namespace std;
const int maxb=(1<<15);
vector<int>pa;
bool isp(int l)
{
    string x=to_string(l);
    int len=x.size();
    for(int i=0;i<len/2;i++)
    {
        if(x[i]!=x[len-i-1])
        {
            return false;
        }
    }
    return true;
}
void makep()
{
    for(int i=0;i<maxb;i++)
    {
        if(isp(i))
        {
           pa.push_back(i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    makep();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<long long>a(n),cnt(maxb+1);
        for(long long &i:a)
        {
            cin >> i;
            cnt[i]++;
        }
        long long ans=n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<pa.size();j++)
            {
                int x=a[i]^pa[j];
                ans+=cnt[x];
            }
        }
        cout << ans/2 << endl;
    }
    return 0;
}