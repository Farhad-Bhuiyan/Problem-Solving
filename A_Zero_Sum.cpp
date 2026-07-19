#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> mp;
        for (int &i : a)
        {
            cin >> i;
            mp[i]++;
        }
        if(n&1)
        {
            cout << "NO" << endl;
            continue;
        }
        int sum = 0;
        for (int i : a)
            sum += i;
        if (sum == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        if(mp[-1]%2==(n/2)%2)cout <<  "YES" << endl;
        else cout << "NO" << endl; 
    }
    return 0;
}