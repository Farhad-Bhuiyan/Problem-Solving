#include<bits/stdc++.h>
using namespace std;
long long prime(long long a)
{
    for(long long i=2;i*i<=a;i++)
    {
        if(a%i==0)return i;
    }
    return a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b;
        cin >> a >> b;
        if(b<=3)cout << -1 << endl;
        else
        {
            if(a<b)
            {
                if(b&1)b--;
                cout << 2 << " " << b-2 << endl;
            }
            else
            {
                long long p=prime(a);
                if(p==a)
                {
                    cout << -1 << endl;
                }
                else 
                {
                    cout << p << " " << a-p << endl;
                }
            }
        }
    }
    return 0;
}