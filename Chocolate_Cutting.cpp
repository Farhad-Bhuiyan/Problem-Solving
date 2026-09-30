#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b;
        cin >> a >> b;
        long long to=a*b;
        if(to%2==0)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}