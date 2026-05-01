#include<bits/stdc++.h>
using namespace std;
int main()
{
    int al[26];
    bool fl[26]={false};
    string x;
    cin >> x;
    for(int i=0;i<x.size();i++)
    {
        fl[x[i]-'a']=true;
    }
    for(int i=0;i<26;i++)
    {
        if(!fl[i])
        {
            char l='a'+i;
            cout << l << endl;
            return 0;
        }
    }
    cout << "None"  << endl;
    return 0;
}