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
        long long n;
        cin >> n;
        vector<long long>a(n);
        map<long long,long long>mp;
        for(long long &i:a)
        {
            cin >> i;
            mp[i]++;
        }
        vector<long long>b;
        for(auto i:mp)
        {
            b.push_back(i.first);
        }
        sort(b.rbegin(),b.rend());
        while (!mp.empty())
        {
            for(long long i:b)
            {
                if(mp.count(i))
                {
                    cout << i << " ";
                    mp[i]--;
                    if(mp[i]==0) mp.erase(i);
                }
            }
        }
    }
    return 0;
}