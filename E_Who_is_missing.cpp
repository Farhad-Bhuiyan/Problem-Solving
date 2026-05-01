#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long size=(4*n)-1;
    vector<long long>v(size),ca(n+1);
    for(int i=0;i<size;i++)
    {
        cin >> v[i];
        ca[v[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(ca[i]<4)
        {
            cout << i << endl;
        }
    }
    return 0;
}