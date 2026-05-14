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
        int n;
        cin >> n;
        if(n%4==0) cout << "North" << endl;
        else if(n%4==1) cout << "East" << endl;
        else if(n%4==2) cout << "South" << endl;
        else cout << "West" << endl;
    }
    return 0;
}