#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int m=max({a,b,c,d});
        cout << m << endl;
    }
    return 0;
}