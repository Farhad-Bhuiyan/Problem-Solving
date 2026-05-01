#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    stack<string>s;
    while(n--)
    {
        string x;
        cin >> x;
        s.push(x);
    }
    map<string,int>m;
    while(!s.empty())
    {
        string y=s.top();
        m[y]++;
        if(m[y]==1)
        {
            cout << y << endl;
        }
        s.pop();
    }
    return 0;
}