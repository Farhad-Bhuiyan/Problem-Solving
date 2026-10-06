#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long>a(n);
    for(long long &i:a)cin >> i;
    for(int i=0;i<(1<<n);i++)
    {
        long long sum=0;
        for(int j=0;j<n;j++)
        {
            if((i>>j)&1)
            {
                sum+=a[j];
            }
            else
            {
                sum-=a[j];
            }
        }
        if(sum%360==0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}