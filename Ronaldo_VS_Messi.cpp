#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    int m=a*2+b;
    int r=x*2+y;
    if(m>r)
    {
        cout << "Messi" << endl;
    }
    else if(m<r)
    {
        cout << "Ronaldo" << endl;
    }
    else 
    {
        cout << "Equal"  << endl;
    }
    return 0;
}