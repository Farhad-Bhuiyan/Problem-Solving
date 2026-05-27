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
        set<int>s;
        map<int,int>mp;
        for(int &i:a)
        {
            cin >>i;
            s.insert(i);
            mp[i]++;
        }
        if(mp[*s.begin()]>=2)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}