#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n ;
    vector<long long> v(n);
    long long pre=0;
    long long ans=0;
    v[0]=1;
    for(int i=0;i<n;i++)
    {
        long long x;
        cin >> x;
        pre+=x;
        int re=((pre%n)+n)%n;
        ans+=v[re];
        v[re]++;
    }
    cout << ans << endl;
    return 0;
}
