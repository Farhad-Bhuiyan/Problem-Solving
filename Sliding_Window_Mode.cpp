#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k;
    cin >> n >> k;
    vector<long long>a(n);
    for(long long &i:a)cin >> i;
    map<long long,long long>mp;
    set<pair<long long,long long>>s;
    auto ad=[&](long long val)
    {
        if(mp[val]>0)
        {
            s.erase({-mp[val],val});
        }
        mp[val]++;
        s.insert({-mp[val],val});
    };
    auto rm=[&](long long val)
    {
        s.erase({-mp[val],val});
        mp[val]--;
        if(mp[val]>0)
        {
            s.insert({-mp[val],val});
        }
    };
    for(int i=0;i<k;i++)
    {
        ad(a[i]);
    }
    cout << s.begin()->second << " ";
    for(int i=k;i<n;i++)
    {
        rm(a[i-k]);
        ad(a[i]);
        cout << s.begin()->second << " ";
    }
    cout << endl;
    return 0;
}