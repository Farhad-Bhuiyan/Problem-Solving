#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(int &i:a)cin >> i;
    unordered_map<int,int>m;
    int l=0;
    long long ans=0,dis=0;
    for(int r=0;r<n;r++)
    {
        if(m[a[r]]==0)
        {
            dis++;
        }
        m[a[r]]++;
        while(dis>k)
        {
            m[a[l]]--;
            if(m[a[l]]==0)
            {
                dis--;
                m.erase(a[l]);
            }
            l++;
        }
        ans+=(r-l+1);
    }
    
    cout << ans << endl;
    return 0;
}