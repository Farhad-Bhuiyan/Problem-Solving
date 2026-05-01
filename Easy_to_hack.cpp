#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin >> x;
    vector<int>v;
    for(int i=0;i<x.size();i++)
    {
        v.push_back((int)x[i]-97);
    }  
    for(int i=1;i<v.size();i++)
    {
        while(v[i-1]>v[i])
        {
            v[i]+=26;
        }
    }  
    for(int i=v.size()-1;i>=0;i--)
    {
        if(i==0)
        {
            v[i]=(v[i]-5+26)%26;
        }
        else
        {
            v[i]=abs((v[i]-v[i-1]+26)%26);
        }
    } 
    for(int i=0;i<v.size();i++)
    {
        char re='a'+v[i];
        cout << re;
    }   
    cout << endl;  
}