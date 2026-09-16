#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin >> a >> b;
    if(abs(a-b)%2==0)
    {
        cout << (a-b)/2 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}