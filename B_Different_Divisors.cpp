#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long long>prim;
    vector<bool>fl(1e7,true);
    for(long long i=2;i<=10000000;i++)
    {
        if(fl[i])
        {
            prim.push_back(i);
            for(long long j=i+i;j<=10000000;j+=i)
            {
                fl[j]=false;
            }
        }
    }
    int t = 1;
    cin >> t;
    
    while(t--)
    {
        long long n;
        cin >> n;
        long long x=*lower_bound(prim.begin(),prim.end(),1+n);
        long long y=*lower_bound(prim.begin(),prim.end(),x+n);
        cout << x*y << endl;
    }

    return 0;
}