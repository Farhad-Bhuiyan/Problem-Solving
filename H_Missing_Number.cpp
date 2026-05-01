#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long>v(n+1);
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v[x]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(v[i]==0)
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}