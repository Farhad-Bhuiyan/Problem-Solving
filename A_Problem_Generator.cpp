#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        string x;
        cin >> x;
        vector<int>v(7);
        for(int i=0;i<n;i++)
        {
            v[x[i]-'A']++;
        }
        int need=0;
        for(int i=0;i<7;i++)
        {
            if(v[i]<m)
            {
                need+=abs(v[i]-m);
            }
        }
        cout << need << endl;
    }
    return 0;
}