#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,k;
        cin >> n >> x >> k;
        vector<int>a(n);
        map<int,int>mp;
        set<int,greater<int>>s;
        for(int &i:a)
        {
            cin>> i;
            s.insert(i);
            mp[i]++;
        }
        int l=0;
        auto it=s.begin();
        for(int i=0;i<k && it!=s.end();i++)
        {
            int y=*it;
            l+=mp[y];
            ++it;
        }
        if(l<x)
        {
            cout << l << endl;
        }
        else
        {
            cout << x << endl;
        }
    }
    return 0;
}