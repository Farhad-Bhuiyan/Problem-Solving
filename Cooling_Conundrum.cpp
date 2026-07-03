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
        int se=0;
        for(int i=x;i>y;i--)
        {
            se+= ceil(i/10.0);
        }
        cout << se << endl;
    }
    return 0;
}