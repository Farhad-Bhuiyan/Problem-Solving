#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int,int>> v(n);
        int c=0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[i]={x,i+1};
            if(x==0)c++;
        }
        if(c==n)
        {
            cout << -1 << endl;
            continue;
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<3;i++)
        {
            cout << v[i].second << " ";
        }
        cout << endl;       
    }
    return 0;
}