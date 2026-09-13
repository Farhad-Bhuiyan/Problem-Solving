#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int>s(n),sum(n);
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
    }
    sum[0]=s[0];
    for(int i=1;i<n;i++)
    {
        sum[i]=s[i]+sum[i-1];
    }
    int q;
    cin >> q;
    while(q--)
    {
        int m;
        cin >> m;
        auto it=lower_bound(sum.begin(),sum.end(),m);
        if(it!=sum.end())
        {
            int id=(it-sum.begin())+1;
            cout << id << endl;
        }
        else
        {
            int id=(it-sum.begin());
            cout << id << endl;
        }
    }
    return 0;
}