#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s,r;
    cin >> s >> r;
    bool fl=true;
    for(int i=0;i<n;i++)
    {
        if(s[i]==r[i])
        {
            fl=true;
        }
        else if((s[i]=='l' && r[i]=='1')||(s[i]=='1' && r[i]=='l'))
        {
            fl=true;
        }
        else if((s[i]=='0' && r[i]=='o') || (s[i]=='o' && r[i]=='0'))
        {
            fl=true;
        }
        else
        {
            fl=false;
            break;
        }
    }
    if(fl)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No"  << endl;
    }
    return 0;
}