#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string a,b;
        cin >> a >> b;
        map<char,int>m1,m2;
        for(char c:a)
        {
            m1[c]++;
        }
        for(char c:b)
        {
            m2[c]++;
        }
        bool f=false;
        if(m1['a']<=m2['b'] && m2['b']<=m2['a'])
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}