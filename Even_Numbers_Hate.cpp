#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int od=0,ev=0;
        while(n--)
        {
            int x;
            cin >> x;
            if(x&1)od++;
            else ev++;
        }
        if(od==0)cout << 0 << endl;
        else 
        {
            cout << ev+1 + ((od-1)/2) << endl;
        }
    }
    return 0;
}