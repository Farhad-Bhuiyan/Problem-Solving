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
        int n;
        cin >> n;
        string x,y;
        cin >> x >> y;
        vector<int>a,b;
        for(int i=0;i<n;i++)
        {
            if(x[i]=='1')a.push_back(i);
            if(y[i]=='1')b.push_back(i);
        }
        if(a.size()!=b.size())
        {
            cout << -1 << endl;
        }
        else
        {
            int cnt=0;
            for(int i=0;i<a.size();i++)
            {
                if(a[i]!=b[i])cnt++;
            }
            cout << cnt << endl;
        }
    }
    return 0;
}