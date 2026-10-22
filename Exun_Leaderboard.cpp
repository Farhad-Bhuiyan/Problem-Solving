#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;

    while(t--)
    {
        long long a,b;
        cin >> a >> b;
        long long cn=0,l=min(a,b),r=max(a,b);
        for(int i=l+1;i<r;i++)
        {
            cn++;
        }
        cout << cn << endl;
    }

    return 0;
}