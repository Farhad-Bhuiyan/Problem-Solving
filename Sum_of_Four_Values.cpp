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
    unordered_map<long long,pair<int,int>>mp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            long long nd=k-a[i]-a[j];
            if(mp.find(nd)!=mp.end())
            {
                pair<int,int>id=mp[nd];
                cout << id.first+1 << " " << id.second+1 << " " << i+1 << " " << j+1 << endl;
                return 0;
            }
        }
        for(int k=0;k<i;k++)
        {
            long long ndd=a[k]+a[i];
            if(mp.find(ndd)==mp.end())
            {
                mp[ndd]={k,i};
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}