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
        int x,y,z;
        cin >> x >> y >> z;
        if(y>=z){
            cout << -1  << endl;
            continue;
        }
        cout << (x+(z-y)-1)/(z-y) << endl;
    }
    return 0;
}