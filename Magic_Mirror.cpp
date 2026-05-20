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
        vector<int>v(n);
        for(int &i:v)cin >> i;
        set<int>st;
        for(int i=0,j=n-1;i<j;i++,j--)
        {
            st.insert(v[i]+v[j]);
        }
        if(st.size()==1)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}