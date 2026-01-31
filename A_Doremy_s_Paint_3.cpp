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
        vector<int>v(n);
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            m[v[i]]++;
        }
        if(m.size()==1)
        {
            cout << "Yes" << endl;
            continue;
        }
        else if(m.size()==2)
        {
            auto it1 = m.begin(),it2=--m.end();
            if(abs(it1->second - it2->second)<=1)
            {
                cout << "Yes" << endl;
                continue;
            }
            else
            {
                cout << "No" << endl;
                continue;
            }
        }
        else
        {
            cout << "No" << endl;
            continue;
        }

    }
    return 0;
}