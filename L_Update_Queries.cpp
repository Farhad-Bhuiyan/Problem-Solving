#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        string x;
        cin >> x;
        vector<int>v(m);
        for(int i=0;i<m;i++)
        {
            cin >> v[i];
        }
        string y;
        cin >> y;
        sort(v.begin(),v.end());
        sort(y.begin(),y.end());
        vector<bool>fl(n,false);
        int j=0;
        for(int i=0;i<m && j<y.size();i++)
        {
            if(!fl[v[i]-1])
            {
                x[v[i]-1]=y[j];
                j++;
                fl[v[i]-1]=true;
            }
            else
            {
                if(x[v[i]-1]>y[j])
                {
                    x[v[i]-1]=y[j];
                    j++;
                }
            }
        }
        cout << x << endl;
    }
    return 0;
}