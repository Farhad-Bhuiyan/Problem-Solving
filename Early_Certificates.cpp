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
        int n,m;
        cin >> n >> m;
        string x,y;
        cin >> x >> y;
        int l=min(n,m);
        for(int i=0;i<l;i++)
        {
            if(x[i]==y[i])cout << x[i] ;
            else break;
        }
        cout << endl;
    }
    return 0;
}