#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int>v(n+1),st(n+1);
    set<int>s;
    for(int i=1;i<=n;i++)
    {
        cin >> v[i];
    }
    for(int i=n;i>=1;i--)
    {
        s.insert(v[i]);
        st[i]=s.size();
    }
    for(int i=0;i<m;i++)
    {
        int k;
        cin >> k;
        cout << st[k] << endl;
    }
    return 0;
}