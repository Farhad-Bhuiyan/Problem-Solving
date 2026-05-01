#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int s=0;
    for(int i=a;i<=c;i+=a)
    {
        s+=b;
    }
    cout << s << endl;
    return 0;
}