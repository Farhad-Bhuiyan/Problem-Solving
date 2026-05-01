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
        vector<int>v(n),v2;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        v2=v;
        sort(v2.begin(),v2.end());
        if(v==v2)
        {
            cout << n << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}