#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int x=floor(n/2.0);
    if(k>x)cout << 0 << endl;
    else
    {
        cout << x+1-k << endl;
    }
    return 0;
}