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
        int n,x,y;
        cin >> n >> x >> y;
        int cost=0;
        for(int i=1;i<=n;i++)
        {
            if(i<=3)cost+=x;
            else cost+=y;
        }
        cout << cost << endl;
    }
    return 0;
}