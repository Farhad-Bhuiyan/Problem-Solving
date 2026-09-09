#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,k;
    cin >> x >> y >> k;
    int l=x*12;
    int r=(y*12)+k;
    if(l<r)
    {
        cout << l << endl;
    }
    else
    {
        cout << r << endl;
    }
    return 0;
}