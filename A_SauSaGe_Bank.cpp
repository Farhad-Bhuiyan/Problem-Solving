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
        long long n,k;
        cin >> n >> k;
        long long ans=(1LL<<(2,n-k+1))+2*(k-1);
        cout << ans << endl;
    }
    return 0;
}