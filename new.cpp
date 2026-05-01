#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        vector<bool>f(n,false);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        int l=0,r=n-1,c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i]!=v[j] && !f[i] && !f[j])
                {
                    c++;
                    f[i]=true;
                    f[j]=true;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}