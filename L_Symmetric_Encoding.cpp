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
        string x;
        cin >> x;
        map<char,int>mp;
        string y="";
        for(char c:x)
        {
            mp[c]++;
            if(mp[c]==1)
            {
                y+=c;
            }
        }
        sort(y.begin(),y.end());
        map<char,char>m;
        for(int i=0,j=y.size()-1;i<=y.size()/2;i++,j--)
        {
            m[y[i]]=y[j];
            m[y[j]]=y[i];
        }
        for(int i=0;i<n;i++)
        {
            x[i]=m[x[i]];
        }
        cout << x << endl;
    }
    return 0;
}