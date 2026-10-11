#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
    {
        long long a,b;
        cin >> a >> b;
        long long mn=min(a,b);
        long long bit=__lg(mn);
        for(int i=0;i<=bit;i++)
        {
            if(((a>>i)&1) && ((b>>i)&1))
            {
                a=(~(1<<i)&a);
                b=(~(1<<i)&b);
            }
        }
        cout << a+b << endl;
    }

    return 0;
}