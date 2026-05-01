#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin >> n >> k;
    long long sum=0;
    int ans=0;
    vector<int>v(n);
    for(int &i:v)cin >> i;
    int l=0,r=0;
    while(r<n)
    {
        sum+=v[r];
        if(sum<=k)
        {
            ans= max(ans,r-l+1);
        }
        else
        {
            sum-=v[l];
            l++;
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}