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
        string x;
        cin >> x;
        map<char,int>mp;
        for(char a:x)
        {
            mp[a]++;
        }
        cout << mp['a']  << " " << mp['b'] << endl;
    }
    return 0;
}