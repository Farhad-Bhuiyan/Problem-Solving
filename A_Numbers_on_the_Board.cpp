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
        long long l,r;
        cin >> l >> r;
        
        if(l<=0 && r>=0)
        {
            cout << max(0LL,abs(l+r)-1) << endl;
        }
        else
        {
            cout << r-l << endl;
        }
    }

    return 0;
}