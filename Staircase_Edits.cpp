#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
       long long n;
       cin >> n;
       map<long long,long long>mp;
       long long c=0;
       for(int i=1;i<=n;i++)
       {
           long long x;
           cin >> x;
           mp[x-i]++;
           c=max(c,mp[x-i]);
       }
       cout << n-c << endl;
    }
    return 0;
}