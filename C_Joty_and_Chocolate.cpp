#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,a,b,p,q;
    cin >> n >> a >> b >> p >> q;
    long long ac=n/a,bc=n/b;
    long long bo=n/((a/__gcd(a,b))*b);
    if(p>q)bc-=bo;
    else ac-=bo;
    cout << (long long)((ac*p)+(bc*q)) << endl;
    return 0;
}