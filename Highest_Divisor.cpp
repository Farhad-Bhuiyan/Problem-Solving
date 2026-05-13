#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mx=0;
    for(int i=1;i<=10;i++)
    {
        if(n%i==0)mx=max(mx,i);
    }
    cout << mx << endl;
    return 0;
}