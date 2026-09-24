#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k;
    cin >> n >> k;
    vector<long long>a(n);
    for(long long &i:a)cin >> i;
    long long sum=0,idx=1,ans=0;
    for(int i=0;i<k;i++)
    {
        sum+=a[i];
    }
    ans=sum;
    for(int i=k;i<n;i++)
    {
        sum-=a[i-k];
        sum+=a[i];
        if(sum<ans)
        {
            ans=sum;
            idx=(i-k)+2;
        }
    }
    cout << idx << endl;
    return 0;
}