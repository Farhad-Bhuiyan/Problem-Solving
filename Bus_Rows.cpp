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
        int n,m,x;
        cin >> n >> m >> x;
        int row=ceil((double)x/m);      
        cout << min(row,n-row+1) << endl;
    }
    return 0;
}