#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long m=1;
    for(int i=1;i<=n;i++)
    {
        m=(m*2)%1000000007;
    }
    cout << m << endl;
    return 0;
}