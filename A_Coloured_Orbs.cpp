#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int r,b;
    cin >> r >> b;
    int cnt=0;
    if(r<b)
    {
        cnt+=r;
        b=b-r;
        r=0;
        cout << (cnt*5)+(b*2) << endl;
    }
    else if(r>b)
    {
        cnt+=b;
        r=r-b;
        b=0;
        cout << (cnt*5)+(r*1) << endl;
    }
    else
    {
        cnt+=b;
        r=0,b=0;
        cout << (cnt*5) << endl;
    }
    return 0;
}