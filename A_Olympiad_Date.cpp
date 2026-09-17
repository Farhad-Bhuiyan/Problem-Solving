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
        unordered_map<int, int> m;
        for (int &i : a)
        {
            cin >> i;
        }
        if(n<8)
        {
            cout << 0 << endl;
            continue;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
            if(m[0]>=3 && m[1]>=1 && m[2]>=2 && m[3]>=1 && m[5]>=1)
            {
                ans=i+1;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}