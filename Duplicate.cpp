#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    bool x=true;
    for(int i=1;i<n;i++)
    {
        if(v[i-1]==v[i])
        {
            x=false;
            break;
        }
    }
    if(x)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}