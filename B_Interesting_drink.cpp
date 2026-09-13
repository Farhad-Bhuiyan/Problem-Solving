#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int>s(n);
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
    }
    sort(s.begin(),s.end());
    int q;
    cin >> q;
    while(q--)
    {
        int m;
        cin >> m;
        int it=upper_bound(s.begin(),s.end(),m)-s.begin();
        cout << it << endl;
    }
    return 0;
}