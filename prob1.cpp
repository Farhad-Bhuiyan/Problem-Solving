#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    stack<string> s;
    vector<string> v(n);
    set<string> st;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        st.insert(v[i]);
        s.push(v[i]);
    }
    while (!s.empty())
    {
        if (st.find(s.top()) != st.end())
        {
            cout << s.top() << endl;
            st.erase(s.top());
        }
        s.pop();
    }
    return 0;
}

