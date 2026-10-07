#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;
        string x;
        cin >> x;
        stack<int>st;
        set<int>ans;
        for(int i=0;i<n;i++)
        {
            if(x[i]=='1')
            {
                st.push(i+1);
            }
            else if(x[i]=='2')
            {
                if(!st.empty())
                {
                    st.pop();
                    ans.insert(i+1);
                }

            }
        }
        while(!st.empty())
        {
            ans.insert(st.top());
            st.pop();
        }
        cout << ans.size() << endl;
        for(int i:ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}