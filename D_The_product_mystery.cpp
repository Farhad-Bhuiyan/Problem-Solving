#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        long long b, c;
        cin >> b >> c;
        long long a=__gcd(b,c);
        cout << c/a << endl;
    }
    return 0;
}