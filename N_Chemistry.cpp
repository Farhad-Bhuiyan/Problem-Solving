#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<char>v(n);
        map<char,int>m;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            m[v[i]]++;
        }
        int od=0;
        for(auto i:m)
        {
            if(i.second%2!=0)
            {
                od++;
            }
        }
        int r=n-k;
        int al=r%2;
        if(od-al <=k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}