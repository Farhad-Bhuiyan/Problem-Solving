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
        vector<int>a(n);
        for(int &i:a)cin >> i;
        int mx=0;
        for(int i=0;i<n-1;i++)
        {
            int h=min(a[i],a[i+1]);
            mx=max(mx,h);
        }
        cout << mx << endl;
    }
    return 0;
}