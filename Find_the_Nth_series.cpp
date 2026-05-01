#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        long long t;
        cin >> t;
        t=t%1000000007;
        long long re=(t*t)%1000000007;
        cout << re << endl;
    }
    return 0;
}