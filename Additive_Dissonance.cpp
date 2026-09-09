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
        vector<long long>a(n);
        unordered_map<long long,long long>m;
        long long mx=0;
        for(long long &i:a)
        {
            cin >> i;
            m[i]++;
            mx=max(mx,m[i]);
        }
        cout << (mx+1)/2 << endl;
    }
    return 0;
}