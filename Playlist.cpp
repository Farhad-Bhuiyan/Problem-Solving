#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int>a(n);
    for(int &i:a)cin >> i;
    set<int>s;
    int ans=0;
    int l=0;
    for(int r=0;r<n;r++)
    {
        while(s.count(a[r]))
        {
            s.erase(a[l]);
            l++;
        }
        s.insert(a[r]);
        ans=max(ans,r-l+1);
    }
    cout << ans << endl;
    return 0;
}