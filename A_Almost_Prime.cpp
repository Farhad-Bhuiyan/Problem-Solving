#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<bool>prim(n+1,true);
    vector<int>ans(n+1),pm;
    for(int i=2;i<=n;i++)
    {
        if(prim[i])
        {
            pm.push_back(i);
            for(int j=i*i;j<=n;j+=i)
            {
                prim[j]=false;
            }
        }
    }

    for(int i:pm)
    {
        for(int j=i;j<=n;j+=i)
        {
            ans[j]++;
        }
    }
    int c=0;
    for(int i:ans)
    {
        if(i==2)
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}