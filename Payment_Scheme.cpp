#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if((100+(x*4))>300)
    {
        cout << 300 << endl;
    }
    else
    {
        cout << 100+(x*4) << endl;
    }
    return 0;
}