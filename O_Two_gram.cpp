#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string x;
    cin >> x;
    map<string,int>m;
    for(int i=1;i<n;i++)
    {
        char a=x[i-1],b=x[i];
        string y="";
        y+=a;
        y+=b;
        m[y]++;
    }
    string max="";
    int min=0; 
    for(auto it:m)
    {
        if(it.second>min)
        {
            min=it.second;
            max=it.first;
        }
    }
    cout << max << endl;
    return 0;
}