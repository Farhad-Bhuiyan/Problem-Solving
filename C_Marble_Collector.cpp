#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        set<int>st;
        for(int i=0;i<n;i++)
        {
            int k;
            cin >> k;
            st.insert(k);
        }
        cout << m-st.size() << endl;
    }
    return 0;
}