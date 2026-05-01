#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<string,vector<int>>mp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
                string x;
                cin >> x;
                mp[x].push_back(i);
            }
        }
        vector<int>a(3);
        for(auto it:mp)
        {
            vector<int>v=it.second;
            if(v.size()==1)
            {
                a[v[0]]+=3;
            }
            else if(v.size()==2)
            {
                a[v[0]]++;
                a[v[1]]++;
            }
        }     
        for(int k:a)
        {
            cout << k << " ";
        }
        cout << endl;
    }    
}