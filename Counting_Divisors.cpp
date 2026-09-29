#include <bits/stdc++.h>
using namespace std;
long long l=1000001;
vector<long long>a(l);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(long long i=1;i<l;i++)
    {
        for(long long j=i;j<l;j+=i)
        {
            a[j]++;
        }
    }
    long long t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        cout << a[x] << endl;
    }

    return 0;
}