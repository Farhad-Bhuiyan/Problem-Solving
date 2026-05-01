#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st1;
    queue<int>qu1;
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        int d;
        cin >> d;
        st1.push(d);
    }
    for(int j=0;j<m;j++)
    {
        int x;
        cin >> x;
        qu1.push(x);
    }
    if(n!=m)
    {
        cout << "NO" << endl;
        return 0;
    }
    bool mk=true;
    while(!st1.empty())
    {
        if(st1.top()!=qu1.front())
        {
            mk=false;
            break;
        }
        st1.pop();
        qu1.pop();
    }
    if(mk)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
