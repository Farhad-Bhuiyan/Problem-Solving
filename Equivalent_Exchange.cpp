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
        int x,y;
        cin >> x >> y;
        int r=0,b=0,s=0;
        for(int i=0;i<x;i++)
        {
            int v;
            cin >> v;
            s+=v;
            r=min(r,s);
            b=max(b,s);
        }
        if(b-r <=y)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}