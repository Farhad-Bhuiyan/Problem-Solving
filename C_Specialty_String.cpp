#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string v;
        cin >> v;
        stack<char>st;
        for(char c:v)
        {
            if(!st.empty() && st.top()==c)
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        if(st.empty())
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