#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    bool fl=true;
    while(t--)
    {
        int x,k;
        cin >> x >> k;
        while(true)
        {
            int sum=0;
            int di=x;
            while(di>0)
            {
                sum+=di%10;
                di/=10;
            }
            if(sum % k == 0)
            {
                cout << x << endl;
                fl=false;
                break;
            }
            di=x++;
        }
    }
}