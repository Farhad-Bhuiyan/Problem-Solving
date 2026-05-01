#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string x;
        cin >> x;
        vector<bool>v(x.size(),true);
        stack<int>cp,sm;
        for(int i=0;i<x.size();i++)
        {
            if(x[i]=='B')
            {
                if(!cp.empty())
                {
                    v[cp.top()]=false;
                    cp.pop();
                }
                v[i]=false;
            }
            else if(x[i]=='b')
            {
                if(!sm.empty())
                {
                    v[sm.top()]=false;
                    sm.pop();
                }
                v[i]=false;
            }
            else if(x[i]>='a' && x[i]<='z')
            {
                sm.push(i);
            }
            else
            {
                cp.push(i);
            }
        }
        for(int i=0;i<x.size();i++)
        {
            if(v[i])
            {
                cout << x[i];
            }
        }
        cout << endl;
    }
    return 0;
}