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
        int mx=*max_element(a.begin(),a.end());
        int mn=*min_element(a.begin(),a.end());
        cout << (mx+1)-mn << endl;
    }
}