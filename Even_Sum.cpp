#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int odd=0,ev=0;
        while(n--)
        {
            int x;
            cin >> x;
            if(x&1)odd++;
            else ev++;
        }
        if(odd&1)
        {
            if(odd>=1) cout << "Yes" << endl;
            else cout << "N0" << endl;
        }
        else
        {
            if(ev>=1)cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}