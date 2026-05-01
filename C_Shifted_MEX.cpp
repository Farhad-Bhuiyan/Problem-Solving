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
        int n;
        cin >> n;
        vector<int>v(n);
        for(int &i:v)cin >> i;
        sort(v.begin(),v.end());
        int mx=1,temp=1;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]==v[i+1])
            {
                continue;
            }
            else if(v[i]+1==v[i+1])
            {
                temp++;
            }
            else
            {
                mx=max(temp,mx);
                temp=1;
            }
        }
        mx=max(temp,mx);
        cout << mx << endl;
    }
    return 0;
}