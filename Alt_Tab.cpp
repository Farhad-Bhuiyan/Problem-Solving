#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    stack<string>st;
    map<string,bool>mp;
    while(n--)
    {
        string x;
        cin >> x;
        st.push(x);
        mp[x]=true;
    }
    while(!st.empty())
    {
        if(mp[st.top()])
        {
            string y=st.top();
            cout << y[y.size()-2] << y[y.size()-1] ; 
            mp[st.top()]=false;
        }
        st.pop();
    }
    cout << endl;
    return 0;
}