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
       int a, b;
       cin >> a >> b;
       int x=max(0,b-a);
       cout << a+(x/2) << endl;
    }
    return 0;
}