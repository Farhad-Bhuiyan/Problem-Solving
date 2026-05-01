#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int>c(7);
    c[1]=1;
    c[2]=2;
    c[3]=3;
    c[4]=3;
    c[5]=2;
    c[6]=1;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n),v2(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            v2[i]=c[v[i]];
        }
        int co=0;
        for(int i=0;i<n;)
        {
            int j=i,sz=0;
            while(j<n && v2[j]==v2[i])
            {
                sz++,j++;
            }
            co+=sz/2;
            i=j;
        }
        cout << co << endl;
    }
    return 0;
}