#include<bits/stdc++.h>
using namespace std;
bool prime(long long n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    if(prime(n))cout << 1 << endl;
    else if(n%2==0)cout << 2 << endl;
    else if(n%2!=0)
    {
        if(prime(n-2))cout << 2 << endl;
        else cout << 3 << endl;
    }
    return 0;
}