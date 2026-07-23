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
        int n,p;
        cin >> n >> p;
        string x;
        cin >> x;
        int lc=0,rc=0;
        for(int i=p-1;i>=0;i--)
        {
            if(x[i]=='R')lc++;
        }
        for(int i=p-1;i<n;i++)
        {
            if(x[i]=='L')rc++;
        }
        cout << min(lc,rc) << endl;
    }
    return 0;
}