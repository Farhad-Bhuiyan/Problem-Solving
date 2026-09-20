#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin >> n >> k;
    vector<long long>v(n),ans;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];   
    }
    map<long long,int>mp;
    for(int i=0;i<k;i++)
    {
        mp[v[i]]++;
    }
    ans.push_back(mp.size());
    for(int i=k;i<n;i++)
    {
        mp[v[i-k]]--;
        if(mp[v[i-k]]==0)mp.erase(v[i-k]);
        mp[v[i]]++;
        ans.push_back(mp.size());
    }
    for(long long i:ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}