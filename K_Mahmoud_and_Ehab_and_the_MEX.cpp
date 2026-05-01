#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n >> x;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        int y;
        cin >> y;
        s.insert(y);
    }
    int co=0;
    if(s.find(x)!=s.end())
    {
        co++;
    }
    for(int i=0;i<x;i++)
    {
        if(s.find(i)==s.end())
        {
            co++;
        }
    }
    cout << co << endl;
    return 0;
}