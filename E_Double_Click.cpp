#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin >> n >> d;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    int id=0;
    for(int i=1;i<n;i++)
    {
        if(v[i]-v[i-1] <= d)
        {
            id=v[i];
            break;
        }
    }
    if(id==0)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << id  << endl;
    }
    return 0;
}