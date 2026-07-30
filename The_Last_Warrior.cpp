#include <bits/stdc++.h>
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
        long long mx=0;
        for(long long &i:a)
        {
            cin >> i;
            if(mx<i)mx=i;
        }
        cout << mx << endl;
    }
    return 0;
}