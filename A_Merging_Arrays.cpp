#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int>f(n),s(m);
    multiset<int>v;
    for(int i=0;i<n;i++)
    {
        cin >> f[i];
        v.insert(f[i]);
    }
    for(int i=0;i<m;i++)
    {
        cin >> s[i];
        v.insert(s[i]);
    }
    for(auto i:v)
    {
        cout << i << " ";
    }
    cout << endl;
}