#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin >> a >> b;
            v[i]={b,a};
        }
        bool fl=false;
        sort(v.begin(),v.end());
        for(pair<int,int> p:v)
        {
            if(p.second >=7)
            {
                cout << p.first << endl;
                fl=true;
                break;

            }
        }
        if(!fl)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}