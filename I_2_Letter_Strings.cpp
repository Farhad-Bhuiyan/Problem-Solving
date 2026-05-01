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
        vector<string>v(n);
        map<string,int>mp;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        long long co=0;
        for(int i=0;i<n;i++)
        {
            mp[v[i]]--;
            string a=v[i],b=v[i];
            for(char c='a';c<='k';c++)
            {
                a[0]=c,b[1]=c;
                if(a!=v[i])
                {
                    co+=mp[a];
                }
                if(b!=v[i])
                {
                    co+=mp[b];
                }
            }
        }
        cout << co << endl;
    }
    return 0;
}