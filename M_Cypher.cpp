#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        vector<pair<int,string>>s;
        for(int i=0;i<n;i++)
        {
            int l;
            string x;
            cin >> l >> x;
            s.push_back({l,x});
        }
        for(int i=0;i<n;i++)
        {
            string y=s[i].second;
            for(int j=0;j<s[i].first;j++)
            {
                if(y[j]=='U')
                {
                    if(v[i]==0)
                    {
                        v[i]=9;
                    }
                    else
                    {
                        v[i]--;
                    }
                }
                if(y[j]=='D')
                {
                    if(v[i]==9)
                    {
                        v[i]=0;
                    }
                    else
                    {
                        v[i]++;
                    }
                }
            }
        }
        for(int i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}