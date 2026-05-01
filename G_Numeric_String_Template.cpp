#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        map<int,vector<int>>mp1;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            mp1[v[i]].push_back(i);
        }
        int m;
        cin >> m;
        while(m--)
        {
            string x;
            cin >> x;
            map<char,vector<int>>mp2;
            if(n!=x.size())
            {
                cout << "NO" << endl;
                continue;
            }
            for(int i=0;i<x.size();i++)
            {
                mp2[x[i]].push_back(i);
            }
            bool fl1=true,fl2=true;
            for(auto i:mp1)
            {
                if(!fl1)
                {
                    break;
                }
                if(i.second.size()>1)
                {
                    for(int j=1;j<i.second.size();j++)
                    {
                        if(x[i.second[0]]!=x[i.second[j]])
                        {
                            fl1=false;
                            break;
                        }
                    }
                }
            }
            for(auto i:mp2)
            {
                if(!fl2)
                {
                    break;
                }
                if(i.second.size()>1)
                {
                    for(int j=1;j<i.second.size();j++)
                    {
                        if(v[i.second[0]]!=v[i.second[j]])
                        {
                            fl2=false;
                            break;
                        }
                    }
                }
            }
            if(fl1 && fl2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}