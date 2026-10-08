#include <bits/stdc++.h>
using namespace std;
bool biton(long long n,long long k)
{
    return ((n>>k)&1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;
        long long msb=__lg(n),B=(1<<msb),A=n^(1<<msb),su=B,c=0;
        for(long long i=0;i<=msb;i++)
        {
            if(!biton(A,i) && !biton(B,i) && (su+(1<<i))<=n)
            {
                c++;
                su+=(1<<i);
            }
        }
        cout << (1<<c) << endl;
    }

    return 0;
}